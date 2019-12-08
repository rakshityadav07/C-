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


void SpiralSearch(int a[][10] , int r ,int c ,int key){

	int j = c-1 ;
	int i = 0 ;
	while(i<r && j>=0){

		if(a[i][j] == key){
			cout << "found at position " << i << " and " << j << endl ;
			break ;
		}else if(a[i][j] < key){
			i++;
		}else{
			j--;
		}

	}
	cout << "Not found" << endl ;

}


int main(){

	int a[10][10] ;
	int r,c,key;
	cin >> r >> c ;
	cout << "Enter the key :" ;
	cin >> key ;


	ReadMatrix(a,r,c);
	PrintMatrix(a,r,c);
	SpiralSearch(a,r,c,key);

}