#include <iostream>
#include <climits>
using namespace std;


//Top down approach
int MinCoinsForChange(int n,int coins[],int T,int dp[]){

	if(n==0){
		return 0;
	}

	if(dp[n]!=0){
		return dp[n];
	}

	// Recursive Case
	int ans = INT_MAX;
	for (int i = 0; i < T; ++i){
		if(n-coins[i]>=0){
			int subPro = MinCoinsForChange(n-coins[i],coins,T,dp);
			ans =  min(subPro+1,ans);
		}
	}
	dp[n] = ans;
	return dp[n];
}

//Bottom-up approach
int minCoinsBU(int N,int coins[],int T){

	int dp[100] = {0};

	for (int n = 1; n <= N; ++n){
 		//initailize the current element as int_max
		dp[n] = INT_MAX;
		//for each coin compute the answer in the dp array
		for (int i = 0; i < T; ++i){
			if(n-coins[i]>=0){
				int subPro = dp[n-coins[i]];
				dp[n] = min(dp[n],subPro+1);					
			}
		}	
	}
	return dp[N];
}

int main(){

	int n,t;
	cin>>n>>t;

	int coins[100];

	int dp[1000] = {0};

	for (int i = 0; i < t; ++i){

		cin>>coins[i];
	}

	// int ans = MinCoinsForChange(n,a,t,dp);	
	int ans = minCoinsBU(n,coins,t);
	cout << "Min Coins For Change is = " << ans ;
}
