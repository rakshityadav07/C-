#include<iostream>
#include <math.h>

#define ll long long int 

using namespace std;

int main(){

	int t;
	cin >> t ;

	ll n,k;

	while(t--){

		cin >> n >> k ;

		if(k==1){
			cout << n << endl ;
			continue;
		}

		ll s = 0 ;
		ll e = n-1 ;
		ll mid;
		ll finalAns;

		while(s<=e){

			mid = (s+e)/2;

			if(pow(mid,k)<=n){
				finalAns = mid; 
				s = mid+1;
			}
			if(pow(mid,k)>n){
				e = mid-1;
			}
		}

		cout << finalAns << endl ;

	}

}