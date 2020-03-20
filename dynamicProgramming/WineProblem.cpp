#include <iostream>
using namespace std;

int MAxProfit(int w[],int i,int j,int y,int dp[][100]){

	// Base Case
	if(i>j){
		return 0;
	}

	if(dp[i][j] != 0){
		return dp[i][j];
	}

	// Recursive Case
	int op1 = w[i]*y + MAxProfit(w,i+1,j,y+1,dp);
	int op2 = w[j]*y + MAxProfit(w,i,j-1,y+1,dp);

	return dp[i][j] = max(op1,op2);
}

int main(){

	int n;
	cin>>n;

	int w[100];
	int dp[100][100] = {0};

	for (int i = 0; i < n; ++i){
		cin>>w[i];
	}
	int i = 0, j = n-1, y = 1;

	int ans = MAxProfit(w,i,j,y,dp);
	cout<<"Max Profit "<<ans<<endl;
	return 0;
}
