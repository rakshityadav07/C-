#include <iostream>
using namespace std ;

void ReadMatrix(int a[][10] , int r, int c){

	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cin >> a[i][j] ;
		}
	}
}

void SpiralPrint(int a[][10], int r ,int c){

	cout << "Spiral Print Sequence is: " ;

	int startRow = 0 ;
	int endrow = r-1 ;
	int startcol = 0 ;
	int endcol = c-1 ;

	while(startRow <= endrow && startcol <= endcol) {

	 	//for printing starting row
		for (int j = startcol; j <= endcol ; j++){
			cout << a[startRow][j] << " " ;
		}
		startRow++;

	 	//for printing last column
		for (int i = startRow; i <= endrow  ; i++){
			cout << a[i][endcol] << " " ;
		}
		endcol--;

	 	//for printing end row - Make sure it is printed if endrow < StartRow
		if(endrow > startRow){
			for (int j = endcol; j >= startcol ; j--){
				cout << a[endrow][j] << " " ;
			}
		}
		endrow--;

	 	//for printing start column
		if(startcol < endcol){
			for (int i = endrow ; i >= startRow ; i--){
				cout << a[i][startcol] << " " ;
			}
		}
		startcol ++ ;
	}	

	cout << endl ;

}

void PrintMatrix(int a[][10] , int r, int c){

	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cout << a[i][j] <<" " ;
		}
		cout << endl ;
	}
	cout <<endl;
}

int main(){

	int a[10][10] ;
	int r,c ;
	cin >> r >> c ;

	ReadMatrix(a,r,c);
	SpiralPrint(a,r,c);
	PrintMatrix(a,r,c);

}