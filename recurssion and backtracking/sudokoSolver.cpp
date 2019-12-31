#include <iostream>
#include <cmath>
using namespace std;

bool canPlace(int mat[][100],int i,int j,int n,int number){

	// To check for row and collumn
	for (int x = 0; x < n; ++x){
		if(mat[x][j]==number || mat[i][x]==number){
			return false ;
		}
	}

	//For the short matrix means it should not contain 2 numbers as same
	int rn = sqrt(n);
	int sx = (i/rn)*rn;
	int sy = (j/rn)*rn;

	for(int x = sx; x < sx+rn; x++){
		for(int y=sy; y < sy+rn; y++){
			if(mat[x][y]==number){
				return false;
			}2
		}
	}
	return true;

}

bool sudokoSolve(int mat[][100],int i,int j,int n){

	//Base Case
	//means whe n we will reach the next to final row the sol will print
	if(i==n){
		//Print the matrix;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				cout << mat[i][j] << " " ;
			}
			cout << endl ;
		}
		return true;
	}
	//Case when row ends
	if(j==n){
		return sudokoSolve(mat,i+1,0,n);
	}

	//skipped the pre-filled cell
	if(mat[i][j]!=0){
		return sudokoSolve(mat,i,j+1,n);
	}

	//Recursive Case
	//fill the current cell with possible options
	for (int number = 1; number <= n; ++number){
		if(canPlace(mat,i,j,n,number)){
			//Asume that the number is correct what we have putted 
			mat[i][j]=number;

			bool couldWeSolve = sudokoSolve(mat,i,j+1,n);

			if(couldWeSolve==true){
				return true;
			}
		}
	}

	//Bactracking
	mat[i][j] = 0;
	return false ;

}

int main(int argc, char const *argv[]){

	int n;
	cin >> n ;

	int mat[100][100]; 

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> mat[i][j] ;
			/* code */
		}
		/* code */
	}

	int i = 0 ;
	int j = 0 ;
	sudokoSolve(mat,i,j,n);

	return 0;
}