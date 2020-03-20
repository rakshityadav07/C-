#include <iostream>
using namespace std;

int maxSum(int a[],int n){

	int dp[100]={0};
	dp[0]=a[0]>0?a[0]:0;

	int max_So_Far = dp[0];
	for (int i = 1; i < n; ++i){
		dp[i] = dp[i-1]+a[i];
		if(dp[i]<0){
			dp[i] = 0;
		}
		max_So_Far = max(dp[i],max_So_Far);
	}
	return max_So_Far;
}

int main(){
	
	int n;
	cin>>n;

	int a[100];

	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}

	int ans = maxSum(a,n);
	cout<<ans<<endl;
	return 0;
}
