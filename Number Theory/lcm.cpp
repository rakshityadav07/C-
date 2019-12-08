#include <iostream>
using namespace std;


int gcd(int a,int b){

	//Base case
	if(b==0){
		return a;
	} 
	return gcd(b,a%b);
}

int lcm(int a,int b){

	return a*b/gcd(a,b);

}

int main(){

	int a,b;
	cin >> a >> b;

	cout << "gcd : " << gcd(a,b) << endl;
	cout << "lcm : " << lcm(a,b);

}
