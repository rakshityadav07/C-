#include <iostream>
using namespace std;

bool checkingPrimeno(int n){

	if(n==1){
		return false;
	}

	if(n==2){
		return true;
	}

	for (int i = 2; i*i < n; ++i){
		if(n%i==0){
			return false;
		}
	}

	return true;

}

int main(){

	int n;
	cin >> n;

	if(checkingPrimeno(n)){
		cout << "Yes " << n << " is Prime no " ;
	}else{
		cout << "No it's not prime no ";
	}

}