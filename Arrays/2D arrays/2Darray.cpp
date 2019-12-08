#include <iostream>
using namespace std;

int main(){

	char a[][4] = {{'a','b','c','\0'},{'d','e','f'}} ;
	cout << a[0] << endl ;
	cout << a[1] << endl ;

	//This method recommended to take string
	//can contain 10 words with max no of length of 100 words
	char s[10][100] = {
		" Apple ",
		" Mango ",
		" Peach ",
		" Grapes "
	};

	cout << s[0] << endl ;
	cout << s[1] << endl ;
	cout << s[2] << endl ;
	cout << s[3] << endl ;

	cin.getline(s[4],100);
	cout << s[4] << endl ;

}