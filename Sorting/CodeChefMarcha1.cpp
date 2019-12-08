#include <iostream>
using namespace std;

int factorial(int n){
	o		
	if(n==0){
		return 0;
	}

	if(n==1){
		return 1;
	}
	
	int k = n*factorial(n-1);

}

int main(){

	int n;
	cin >> n;

	int k = factorial(n);

	cout << k << endl;

}