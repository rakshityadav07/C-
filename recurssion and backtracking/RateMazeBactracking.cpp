#include <iostream>
using namespace std;

// int count = 0;

bool ratInMaze(char maze[10][10],int sol[][10],int i,int j,int m,int n){

	//Base Case
	if(i==m && j==n){
		sol[m][n]=1;
		//Print the path
		for (int i = 0; i <= m; ++i){
			for (int j = 0; j <= n; ++j){
				cout << sol[i][j] << " ";
			}
			cout << endl ;
		}
		cout << endl ; 
		// count ; 
		return true;

	}

	//Rat should be inside the grid
	if(i>m || j>n){
		return false;
	}

	if(maze[i][j] == 'X'){
		return false;
	}

	//Assume there is the path 
	sol[i][j] = 1;

	bool rightsucces = ratInMaze(maze,sol,i+1,j,m,n);
	bool downsucces = ratInMaze(maze,sol,i,j+1,m,n);

	//Bactracking to maintain the original maze 
	sol[i][j] = 0;

	if(rightsucces||downsucces){
		return true;
	}
	return false;

}


int main(int argc, char const *argv[])
{

	char maze[10][10] = 
	{
		"0000",
		"00X0",
		"000X",
		"0X00"
	};

	int sol[10][10] = {0};

	int i = 0 ;
	int j = 0;
	int m,n;
	cin >> m >> n ;

	bool ans = ratInMaze(maze,sol,i,j,m-1,n-1);
	if(ans==false){
		cout << "no path" ;
	}
	// cout << count ;

	return 0;
}