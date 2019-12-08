#include <iostream>
using namespace std;

int find(int a[],int s,int e,int key){

	int mid = (s+e)/2;

	if(s>e){
		return 0;
	}

	if(a[mid] == key){
		return mid;
	}

	//mid lies in the first line
	if(a[s]<=a[mid]){
		if(a[s]<=key && a[mid]>=key){
			return find(a,s,mid-1,key);
		}else{
			return find(a,mid+1,e,key);
		}
	}

	//mid lies in the second line
	if(a[mid]<=key && a[e]>=mid){
		return find(a,mid+1,e,key);
	}else{
		return find(a,s,mid-1,key);
	}

}

int main(){

	int n;
	cin >> n ;

	int key;
	cin >> key ;

	int a[100];

	for (int i = 0; i < n; ++i){
		cin >> a[i] ;
	}

	int s=0;
	int e=n-1;

	int ans = find(a,s,e,key);

	cout << ans << endl ;

}