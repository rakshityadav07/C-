#include <iostream>
using namespace std;
int main(){

	char a[] = {'a','b','c','d','\0'};
	cout << a <<endl ;
	cout << sizeof(a) << endl ;

	char b[] = "Hello";
	cout << b << endl ;
	cout << sizeof(b) << endl ;

	char c[100];
	cin.getline(c,100);

	cout << c << endl ;

}