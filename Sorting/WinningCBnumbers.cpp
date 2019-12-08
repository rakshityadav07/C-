#include <iostream>
#include <algorithm>
#define ll long long int

using namespace std;

bool isValid(ll n,ll m,ll x,ll z,ll mid){

	if(mid*x <= m+(n-mid)*z){
		return true;
	}
	return false;

}

int main(){

	ll n;
	// cout << "n: " << endl ;
	cin >> n; 

	ll m;
	// cout << "m :" << endl ;
	cin >> m;

	ll x;
	// cout << "x :" << endl ;
	cin >> x;

	ll z;
	// cout << "z: " << endl ;
	cin >> z; 


	n=n+m+x;

	ll s=0;
	ll e=n;
	ll mid;

	ll finalAns = 0 ;

	while(s<=e){

		mid = (s+e)/2;

		if(isValid(s,m,x,z,mid)){
			//true
			s = mid +1;
			finalAns = mid ;
		}
		//false;
		else{
			e = mid -1; 
		}
	}

	cout << finalAns ;


}