#include <iostream>

using namespace std;

void XorSwapping(int a,int b){
	a = a^b;
	b = b^a;
	a = a^b;

	cout << a << " " << b << endl ;
}

int main(){

	int a,b;
	cin >> a >> b;

	XorSwapping(a,b);

	return 0;

}