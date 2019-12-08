
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int n,m;
	std::cin >> n;
	m=n;
	int array[n][m];
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin>>array[i][j];
		}
	}

	for(int i=0;i<n;i++) {
		for(int j=i;j<m;j++) {
			swap(array[i][j],array[j][i]);
		}
	}

	for(int i=0;i<n;i++) {
		int startRow = 0;
		int endRow = n-1;
		while(startRow<=endRow) {
			swap(array[startRow][i], array[endRow][i]);
			startRow++;
			endRow--;
		}
	}

	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
