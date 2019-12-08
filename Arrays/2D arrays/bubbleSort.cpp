#include <iostream>
#include <algorithm>
using namespace std; 

void bubbleSort(int arr[100] ,int n){
	int i,j ;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n-i-1; ++j){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main(){
	int arr[100] ;
	int n;
	cin >> n ;

	for (int i = 0; i < n; ++i){
		cin >> arr[i] ;
	}
	
	bubbleSort(arr,n) ;

	for (int i = 0; i < n; ++i){
		cout << arr[i] << " " ;
	}
}