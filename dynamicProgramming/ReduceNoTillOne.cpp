#include <iostream>
#include <climits>
#include <stack>

using namespace std;

int ReduceNoTillOne(int n,int dp[]){

	//Base case
	if(n==1){
		return 0;
	}
	// look if dp[n] is computed or not 
	if(dp[n]!=0){
		return dp[n];
	}
	// compute if dp[n]  is not known (for first);
	int opt1,opt2,opt3;
	opt1 = opt2 = opt3 = INT_MAX;

	if(n%3 == 0){
		opt1 = ReduceNoTillOne(n/3,dp) + 1;
	}
	if(n%2 == 0){
		opt2 = ReduceNoTillOne(n/2,dp) + 1;
	}	
	opt3 = ReduceNoTillOne(n-1,dp) + 1;

	int ans = min(min(opt1,opt2),opt3);
	return dp[n]=ans;
	
}

int minStepsBotUP(int n,int dp[]){
	// BOttomUPApproach

	int dp[100] = {0};

	dp[1] = 0;

	for (int i = 2; i <= n; ++i){
		int opt1,opt2,opt3;
		opt1 = opt2 = opt3 = INT_MAX;

		if(n%3 == 0){
			opt1 = dp[i/3];
		}
		if(n%2 == 0){
			opt2 = dp[i/2];
		}	
		opt3 = dp[i-1];	
		dp[i] = min(min(opt1,opt2),opt3) + 1;
	}
	return dp[n];
}


int main(){
	
	int n;
	cin>>n;

	int dp[1000] = {0};

	int totalSteps = ReduceNoTillOne(n,dp);
	cout<<totalSteps<<endl;
	
	return 0;

}
