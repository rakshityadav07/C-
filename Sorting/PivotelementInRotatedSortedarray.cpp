#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int n;
	cin >> n ; 

	int a[100];

	for (int i = 0; i < n; ++i){
		cin >> a[i] ;
	}

	int s=0;
	int e=n-1;
	int mid = (s+e)/2;

	while(s<=e){
		//1.Case 1 when mid element is > then mid+1 elmemt
		if(mid<e && a[mid]>a[mid+1]){
			cout << mid << " " << endl; 
		}
		//2.When the mid element is > mid-1
		if(mid>s && a[mid]<a[mid-1]){
			cout << mid-1 << " " << endl;
		}
		if(a[s]>=a[mid]){
			e=mid-1;
		}else{
			s=mid+1;
		}
	}

	if(s>e){
		cout << "pivot element doen't exists. " ;
	}

}