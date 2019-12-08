#include <iostream>
using namespace std;

int main(){

	int n;
	int arr[1000];
	cin >> n ;

	//..we make the array for the cummulative sum subarrays of the array
	int cSum[1000] = {0}; 
	cin>>arr[0];
	cSum[0] = arr[0];

	for (int i = 1; i < n; ++i){
		cin >> arr[i];
		cSum[i] = cSum[i-1] + arr[i];
	}


	int curSum = 0 ;
	int maxSum = 0 ;
	int left = -1 ;
	int right = -1 ;


	for (int i = 0; i < n; ++i){
		for (int j = i; j < n; ++j){
			//as every time we start a new subarray the csum should be starting from zero
			curSum = 0 ;
			curSum = cSum[j] - cSum[i-1] ;

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