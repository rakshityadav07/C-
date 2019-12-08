#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n ;
	int arr[n];

	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	//generates the subarrays
	for (int i = 0; i < n; ++i){
		for (int j = i; j < n; ++j){
			//print all the subarrays(i,j)
			for (int k = i; k <= j; ++k){
				cout << arr[k] << " ,";
			}
			cout << endl ;
		}
	}

}