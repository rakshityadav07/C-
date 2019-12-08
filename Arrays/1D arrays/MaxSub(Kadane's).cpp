#include <iostream> 
using namespace std;

int main(){

	int n;
	cin >> n; 

	int arr[100];
	int curSum = 0;
	int maxSum = 0;

	for (int i = 0; i < n; ++i){
		cin >> arr[i] ;
	}

	//kadaen's algo for max subarrays sum
	for (int i = 0; i < n; ++i){
		curSum = curSum + arr[i];
		if(curSum < 0){
			curSum = 0;
		}
		maxSum = max(curSum ,maxSum) ;
	}
	cout << "The maximum sum of the subarray is "<< maxSum << endl ;

} 
