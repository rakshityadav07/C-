/*how to find the first occurence(Lower bound) in the sorted array*/
#include <iostream>
#include <algorithm>

using namespace std;

int lowerAndupperbound(int a[],int n,int key){

	int ans = -1;//ans will be -1 if there is no key present in the sorted array
	int s = 0 ;
	int e = n-1 ;
	int mid ;

	while(s<=e){

		mid = (s+e)/2;

		if(a[mid] == key){
			ans = mid ;
			e = mid-1;
		}else if(a[mid] < key){
			e = mid-1;
		}else{
			s = mid+1;
		}
	}

	return ans ;

}

int main(){

	int n;
	cin >> n;

	int key;
	cin >> key ;

	int a[100];

	for (int i = 0; i < n; ++i){
		cin >> a[i] ;
	}

	int ans = lowerAndupperbound(a,n,key);

	if(ans==-1){
		cout << key << " not found " << endl ;
	}
	cout << key << " found at " << ans <<  endl ;

}