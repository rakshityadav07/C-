#include <iostream>
#include <cstring>
using namespace std;

int main(){

	char a[10][100] ;
	int n;
	cin >> n;
	cin.ignore(); //to ignore the enter after n

	for (int i = 0; i < n; ++i){
		cin.getline(a[i],100);
	}

	char key[10];
	cout << "String to search : " ;
	cin.getline(key ,100);


	//Linear Search
	int i;
	for (i = 0; i < n; ++i){
		//To compare wo arrays use loop or use strcmp() inbuild function
		if(strcmp(key,a[i])==0){
			cout << "Found at index : " << i <<endl ;
			break ;
		}
	}

	if(i==n){
		cout << "Not found " <<endl ;
	}
}