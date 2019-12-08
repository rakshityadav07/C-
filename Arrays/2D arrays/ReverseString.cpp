#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

//Method 2
int reverse(string &s){

	int n = s.length();
	for (int i = 0; i < n/2; ++i){
		swap(s[i], s[n-i-1]) ;
	}
}

int main(){

	string s("Hello");
	cout << s <<endl ;
	cout << s.length() <<endl ;
	

	/*//Method 1
	for (int i = s.length(); i >=0 ; i--){
		cout <<s[i] ;
	}*/

	//Method 3
	//Inbuild method use 
	//Use header as algorithm
	reverse(s.begin(),s.end());
	cout << s << endl ;

	//Method 2
	reverse(s);
	cout << s << endl ;



}