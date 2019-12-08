#include <iostream>
#include <algorithm>
using namespace std;

void InsertionSort(int arr[100],int n){

	for (int i = 0; i < n; ++i){

		int no = arr[i];
		int j = i-1;

		while(j >= 0 && arr[j] > no) {

			arr[j+1] = arr [j];
			j--;
		}
		arr[j+1] = no ;
	}

}


int main(){

	int arr[100];
	int n;
	cin >> n ;

	for (int i = 0; i < n; ++i)	{
		cin >> arr[i];
	}

	InsertionSort(arr,n);

	for (int i = 0; i < n; ++i){
		cout << arr[i] << " " ;
	}

	cout << endl ;
}