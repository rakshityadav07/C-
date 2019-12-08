#include <iostream>
using namespace std;

bool sorting(int *a,int n){

	if(n==1){
		return true;
	}

	if(a[0]<a[1] && sorting(a+1,n-1)){
		return true;
	}

	return false;
}

int main(){

	int n;
	cin >> n;

	int a[100];

	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}

	if(sorting(a,n)){
		cout << "Yes Sorted" << endl ;
	}else{
		cout << "Not Sorted" << endl ;
	}

}