#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std; 

bool compare(string a,string b){
	return a.length() > b.length() ;
}

int main(){

	// string s("Hello world ");
	// cout << s << endl ;
	// //Here length also counts the spaces ,tabs ,enters etc; 
	// cout << s.length() << endl ;


	// string s2 = "Another way !" ;
	// for (int i = 0; i < s2.length(); ++i){
	// 	cout << s2[i] << "-" ;
	// }
	// // cout << s2 << endl ;


	// string s3 ;
	// getline(cin, s3) ;
	// cout << s3 << endl ; 


	string a[] = {"apple" ,"pineapple" ,"mango" ,"gauava" ,"Kiwi"};
	sort(a , a+5 ,compare) ;
	for (int i = 0; i < 5 ; ++i){
		cout << a[i] << "," ;
	}
/*
	//for inout in aaray fro string array
	char string[20][20];
	int number;
	cin >> number ;

    //input
	for(int i=0;i<=number;i++){
		cin.getline(string[i],20);
	}

	for (int i = 0; i <=number; ++i){
		cout << string[i] << ", " << endl ;
	}
*/
}