#include <iostream>
using namespace std;

int ladders_top_down(int n,int k,int dp[]){

	// base case
	if(n==0){
		return 1;
	}

	int ways=0;
	for (int i = 1; i <= k; ++i){
		if(n-i>0){
			ways += ladders_top_down(n-i,k,dp);
		}
	}

}

int main(){
	
	int n,k;
	cin>>n>>k;



	return 0;
}
