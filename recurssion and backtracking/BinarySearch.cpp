#include <iostream>
using namespace std;

int BinarySearch(int a[],int l,int r,int key){

	if(l<=r){
		int mid = (l+r)/2 ;

		if(key == a[mid]){
			return mid ;
		}
		if(a[mid] > key){
			return BinarySearch(a,l,mid-1,key) ;
		}
		else {
			return BinarySearch(a,mid+1,r,key);
		}
	}
	return -1 ;
}

int main(){

	int n;
	cin >> n;

	int a[100];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i] ;
		/* code */
	}

	int l = 0;
	int r = n-1;

	int key ;
	cin >> key ;

	int result = BinarySearch(a,l,r,key);

	if(result == -1){
		cout << "Key Not found " << result << endl ; 
	}
	cout << "Key found at index : " << result << " and the key searched is " << a[result] << endl ;

}