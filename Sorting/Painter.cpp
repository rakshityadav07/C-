#include <iostream>
#define ll long long int
using namespace std;

int main(){

	ll n,k,t,li;
	cin >> n >> k >> t >> li;


	int s = 0 ;
	int e= n-1

	int mid;

	while(s<=e){

		mid = (s+e)/2;

		if(getmax(a,n,k,mid)){
			finalans = ans;
			s = mid+1;
		}
		else{
			e = mid -1;
			
		}

	}


}