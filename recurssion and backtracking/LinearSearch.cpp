#include <iostream>
using namespace std;

int linearSearch(int a[] ,int i ,int n,int key){

	if(i==n){
		return -1;
	}
	if(a[i]==key){
		return i;
	}

	return linearSearch(a,i+1,n,key);

}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n ;

	int i = 0;

	int a[100];
	
	for (int i = 0; i < n; ++i)	{
		cin >> a[i] ;
	}

	int key;
	cin >> key ;

	cout << "Found on index : " << linearSearch(a,i,n,key) ;

	return 0;
}