#include <iostream>
using namespace std;


bool isSafe(int board[][10],int i,int j,int n){

	//check for coloumn
	for (int row = 0; row < i; ++row)
	{
		if(board[row][j]==1){
			return false;
		}
	}

	//check for left diagonal
	int x = i;
	int y = j;

	while(x>=0 && y>=0){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y--;
	}


	//For Right diagonal
	x=i;
	y=j;

	while(x>=0 && y<n){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y++;
	}

	return true;

}


bool solveNqueen(int board[][10],int i,int n){

	//base case
	if(i==n){
		//succesfully placed all the 
		//queens on there respective positions from (0...n) rows
		//Print the board
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if(board[i][j]=1){
					cout << "Q " ;
				}
				else{
					cout << "_ " ;
				}
			}
			cout << endl;
		}
		return true;
	}

	//recursive case
	//Place queen in current row and call on the reamining part
	for (int j = 0; j < n; ++j)
	{
		if(isSafe(board,i,j,n)){
			//Place the queen
			board[i][j]=1;

			bool nextQueenPlace = solveNqueen(board,i+1,n);
			if(nextQueenPlace){
				return true;
			}
			//Means i,j is not the right place-Assumption is wrong 
			board[i][j]=0; //Bactrack
		}
	}	

	//We cannot place the queens as we have tried all the positions
	return false ;

}

int main(){

	//We inputed 
	int n;
	cin >> n ;

	int board[10][10] = {0};
	
	solveNqueen(board,0,n);

	return 0;

}