#include <iostream>
using namespace std;

int printMattrix(int ar[][100],int r,int c){

	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cout << ar[i][j] << " " ;
		}
		cout << endl;
	}

}


int spiralPrint(int ar[][100],int r,int c){

	int startrow = 0;
	int endrow = r-1;
	int startcol = 0;
	int endcol = c-1;

	while(startcol<=endcol && startrow <= endrow){

		//for printing startrow
		for (int i = startcol; i <= endcol; ++i){
			cout << ar[startrow][i] << ", " ;
		}
		startrow++;

		//for printing lastcol
		for (int j = startrow; j <= endrow ; ++j){
			cout << ar[j][endcol]<< ", " ;
		}
		endcol--;

		//to print endrow
		if(startrow < endrow){
			for (int i = endcol; i >= startcol ; --i){
				cout << ar[endrow][i] << ", ";
			}
		}
		endrow--;

		//to print startcol
		if(startcol < endcol){
			for (int j = endrow; j >= startrow ; --j){
				cout << ar[j][startcol] << ", " ;
			}
		}
		startcol++;
	}

	cout << endl ;

}

int main(){

	int ar[10][100];

	int r,c;
	cin >> r >> c;

	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cin >> ar[i][j] ;
		}
	}

	
	spiralPrint(ar,r,c);


}