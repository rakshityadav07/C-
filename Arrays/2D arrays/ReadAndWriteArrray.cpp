#include <iostream>
using namespace std ;

void ReadMatrix(int a[][10] , int r, int c){

	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cin >> a[i][j] ;
		}
	}
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

/*Wave form*/
void wavePrint(int a[][10], int r , int c){
	//Iterate over fixed column for rows
	for (int j = 0; j < c; ++j){
		//For odd and even column
		//for even iterate form 0 to r-1
		//for odd iterate from r-1 to 0
		if(j&1){
			for (int i = r-1; i >= 0; i--){
				cout << a[i][j] << " " ;
			}
		}else{
			for (int i = 0; i < r; ++i){
				cout << a[i][j] << " " ;
			}
		}
	}

	cout << endl ;
}

int main(){

	int a[10][10] ;
	int r,c;
	cin >> r >> c ;

	ReadMatrix(a,r,c);
	PrintMatrix(a,r,c);
	wavePrint(a,r,c);

}