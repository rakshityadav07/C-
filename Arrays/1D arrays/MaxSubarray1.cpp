#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n ;
	int arr[n];

	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	int curSum = 0 ;
	int maxSum = 0 ;
	int left = -1 ;
	int right = -1 ;

	for (int i = 0; i < n; ++i){
		for (int j = i; j < n; ++j){
			//as every time we start a new subarray the csum should be starting from zero
			curSum = 0 ;
			for (int k = i; k <= j; ++k){
				curSum = curSum + arr[k];
			}
			//update maximum sum 
			if (curSum > maxSum){
				maxSum = curSum ;
				left = i ;
				right = j ;
			}
		}
	}	
	cout << "maximum sum of a subarray is : " << maxSum << endl ;
	for (int i = left; i <= right; ++i){
		cout << arr[i] << " ," ;
	}

}