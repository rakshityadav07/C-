#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool compare(string a,string b ){

	//Here we sort on the basis of length of the string
	if(a.length()<b.length()){
		return true; 
	}
	// Otherwise it will sort on the basis of alphabetical order(lexiographically)
	return a<b ;
}

int main(){

	string s[10] = {"Banana" , "Apple" ,"Mango" ,"Pineapple","Gauava" , "Kiwi" ,"Grapes"} ;

	//inbuild sort function
	int n = 7 ;
	sort(s,s+7,compare);

	for (int i = 0; i < 7; ++i){
		cout << s[i] << endl ;
	}

	cout << "Enter the string to search : " << endl ;
	string s2;
	getline(cin, s2) ;


	//linear search
	int i ;
	for (i = 0; i < n; ++i){
		if(s2 == s[i]){
			cout << "Found at Poistion : " << i << endl ;
			break ;
		}
	}
	if(i == n ){
		cout << "Not Found !" << endl ;
	}

}