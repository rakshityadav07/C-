#include <iostream>
using namespace std;

bool palindrome(int n,int ar[]){

	for (int index = 0; index < n; index++) {
		int start = ar[index];
		int end = ar[--n];

		if(start == end){
			return true ;
		}
        // check if elements till the middle have been compared
		if (n < index) {
			return true;
		}
        // if start element is not the same as end element, the array is not
        // palindrome
		if (start != end) {
			return false;
		}
	}
}

int main(){

	int n;
	cin >> n ;

	int ar[100];

	for (int i = 0; i < n; ++i){
		cin >> ar[i] ;
	}

	if(palindrome(n,ar)){
		cout << "true";
	}else{
		cout << "false";
	}

}