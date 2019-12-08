#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int a[10005];

	int n;
	cin>>n;

	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}

	sort(a,a+n);

	int target;
	cin>>target;

	// for (int i = 0; i < n; ++i){
	// 	for (int j = 0; j < n; ++j){
	// 		if(a[i]+a[j]==target){
	// 			cout<<a[i]<<" and "<<a[j]<<endl;
	// 		}
	// 	}
	// }

	int left = 0;
	int right = n-1;

	while(left<right){
		int sum = a[left] + a[right];
		//1.if /target is equal to the sum
		if (sum < target){
			left++;
		}else if(sum > target){
			right--;
		}else{
			cout << a[left] << " and " << a[right] << endl; 
			left++;
			right--;
		}

	}


}