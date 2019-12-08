#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int a[1000];

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int curSum = 0 ;
	int maxSum = 0 ;

	for (int i = 0; i < n; ++i){
		curSum = curSum + a[i];

		if(curSum < 0){
			curSum = 0 ; 
		}
		maxSum = maxSum + max(curSum,maxSum);
	}

	cout << maxSum << endl; 

}