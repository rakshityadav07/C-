#include <iostream>
#include <cstring>
using namespace std;

void stringCompression(string s,int n){

	int count = 1;

	cout << s[0] ;

	if(n==1){
		cout << count ;
	}


	for (int i = 1; i < n; ++i){
		
		if(s[i] == s[i-1]){
			count ++;
		}else{
			cout << count ;
			cout << s[i];
			count = 1 ;
		}
	}

	cout << count << endl ;
	
}

int main(){

	string s;
	cin >> s;

	int n = s.length();

	stringCompression(s,n);

}