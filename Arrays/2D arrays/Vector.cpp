#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*void compare(int a,int b){
	return a > b ;
}*/

int main(){

	vector<int> v;

	int n ;
	cin >> n ;
	for (int i = 0; i < n; ++i){
		int temp ;
		cin >> temp ;

		v.push_back(temp) ; 

	} 

	v.pop_back() ;

	sort(v.begin(), v.end()); // can add the compare() function
	cout << v.capacity() << endl ;	

	for (int i = 0; i < v.size(); ++i){
		cout << v[i] << " " ;
	}

	return 0 ;

	
}


