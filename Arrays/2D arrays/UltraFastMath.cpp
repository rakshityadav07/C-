#include <iostream>
#include <cstring>

using namespace std;

int main(){

	int t;
	cin >> t ;

	while(t--){

		string s1;
		cin >> s1 ;

		string s2;
		cin >> s2;

		int n = s1.length();

		for (int i = 0; i < n; ++i){
			
			if(s1[i] != s2[i]){
				cout << "1" ;
			}else{
				cout << "0" ;
			}

		}

		cout << endl ;

	}


}