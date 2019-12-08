#include <iostream>
#include <algorithm>
using namespace std ;

void transpose(int a[][10] ,int r ,int c){

	for (int i = 0; i < r; ++i){
		for (int j = i; j < c; ++j){
			swap(a[i][j], a[j][i]) ;			
		}
	}
}

void reverse(int a[][10] ,int r,int c){

	for (int i = 0; i < r; i++){
		//for every row we initialize the value of k = c-1//means last column value of that row
		int k = c-1 ;
		for (int j = 0; j < k; j++){
			swap(a[i][j], a[i][k]);
			k-- ;
		}
		cout << endl ;
	}
}

int main(){

	int r,c;
	cin >> r >> c ;

	int a[10][10] ;

	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cin >> a[i][j] ;
		}
	}

	transpose(a,r,c);
	reverse(a,r,c) ;

	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cout << a[i][j] << " " ;
		}
		cout << endl ;
	}

}