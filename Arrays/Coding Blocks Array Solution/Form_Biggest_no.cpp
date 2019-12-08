#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool mycompare(string a, string b){

	string ab = a.append(b);
	string ba = b.append(a);

	return ab.compare(ba) > 0 ;
// 	int string::compare (const string& str) const
// Returns:
// 0 : if both strings are equal.
// A value < 0 : if *this is shorter than str or,
// first character that doesn't match is smaller than str.
// A value > 0 : if *this is longer than str or,
// first character that doesn't match is greater

}

int main(){

	int t;
	cin >> t ;

	while(t--){

		int n;
		cin >> n;

		string arr[100];

		for (int i = 0; i < n; ++i){
			cin >> arr[i] ;
		}

		sort(arr,arr+n,mycompare);

		for (int i = 0; i < n; ++i){
			cout << arr[i] ;
		}
		cout << endl ;
	}
}