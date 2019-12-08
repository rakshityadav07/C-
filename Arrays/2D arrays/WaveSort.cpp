#include <iostream>
#include <algorithm>
using namespace std;

void WaveSort(int arr[100],int n){

	for (int i = 0; i < n; i+=2){

		/*Check for the Left element*/
		if (i>0 && arr[i-1] > arr[i]){
			swap(arr[i],arr[i-1]);
		}

		/*Check for the right element*/
		//n-2 because we can check the right of second last element
		if (i<=n-2 && arr[i+1] > arr[i]){
			swap(arr[i],arr[i+1]);
		}

	}

}

int main(){

	int arr[100];
	int n;
	cin >> n ;

	for (int i = 0; i < n; ++i)	{
		cin >> arr[i];
	}

	WaveSort(arr,n);

	for (int i = 0; i < n; ++i){
		cout << arr[i] << " " ;
	}

	cout << endl ;

}