#include <iostream>
using namespace std;

int main(){

	int x=19;

	cout<<&x<<endl;

	float y=10;
	cout<<&y<<endl;

//...It doesnot work for character variable
	char ch ='A';
	cout<< &ch <<endl;

//Can be solved by type casting
//which means converting char* to void* 
	cout<< (void *)&ch << endl ;

}