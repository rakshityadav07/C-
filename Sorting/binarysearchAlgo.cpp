#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(int a[100],int n,int target){

	int s = 0 ;
	int e = n -1 ;

	int mid;

	while(s<=e){
		
		mid = (s+e)/2;
		
		if(a[mid]==target){
			return mid;
		}
		else if(a[mid]>target){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}

	return -1;

}

int main(){

	int a[100];

	int n;
	cin >> n ;

	int target;
	cout <<"Target: " ;
	cin >> target ;

	for (int i = 0; i < n; ++i){
		cin >> a[i] ;
	}

	int searchIndex = binarySearch(a,n,target);

	if(searchIndex == -1){
		cout << target << " is not present" <<  endl ;
	}else{
		cout << target << " is present " << searchIndex << endl ;
	}

}