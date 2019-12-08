#include <iostream>
using namespace std;

int main(){

	int r,c;
	cin>> r >> c ;

	int a[10][100] ;

	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cin >> a[i][j];
		}
	}

	//Wave Print 
	//for column wise
	for (int j = 0; j < c; ++j){
		
		//means for odd column
		if(j%2!=0){
			for (int i = r-1; i >= 0; --i){
				cout << a[i][j]<<", ";
			}
		}else{
			for (int i = 0; i <= r-1; ++i){
				cout << a[i][j] << ", ";
			}
		}

	}

	cout << "END" << endl ; 

}