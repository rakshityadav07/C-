#include <iostream>
using namespace std ;

int TileWays(int a[][100],int r,int n){

	if(r<n){
		return 1;
	}
	

}


int main(int argc, char const *argv[])
{
	int r=4;
	int n;
	cin >> n;

	int a[10][100] ;

	for (int i = 0; i < r; ++i)
	{
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i]
			/* code */
		}
		/* code */
	}

	TileWays(a,r,n);

	return 0;
}
