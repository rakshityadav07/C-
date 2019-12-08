#include <iostream>
#include <cstring>
#define ll long long 
using namespace std ;


ll a[1000005],prefixSum[1000005];

int  main(){

	int t ;
	cin >> t ;

	while(t--){

		int n;
		cin >> n;

		ll sum = 0;

		// all the value in cummarray or prefixSum will become 0
		memset(prefix,0,sizeof prefixSum);
		//because atleat there will one sum which will be 0;
		//the starting one 
		//so we start the prefix sum from 1
		prefixSum[0] = 1;

		for (int i = 0; i < n; ++i){
			cin >> a[i];
			//cummulative sum 
			sum += a[i];
			//if no is +ve then this
			sum %= n;
			//when no is -ve
			//it will no change the answer if the no is +ve(for all)
			sum = (sum+n)%n;
			prefixSum[sum]++;		
		}

		ll ans = 0;
		for (int i = 0; i < n; ++i){
			ll no = prefixSum[i];
			ans += ((no)*(no-1))/2;
		}

		cout << ans << endl;

	}


}

