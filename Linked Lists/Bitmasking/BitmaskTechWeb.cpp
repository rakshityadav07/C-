/*Count bit sets 
Means How many bits are different */

#include <iostream>
using namespace std;

void count(int n){

	int count=0;
	while(n>0){
		count += (n&1);
		n = n>>1;
	}

	cout << count << endl ;
}

void CountBitsFast(int n){

	int count = 0;
	while(n>0){
		count++;
		n=(n)&(n-1);
	}

	cout << count << endl;

}

int main(){

	int n;
	cin >> n;

	// count(n);
	CountBitsFast(n);

	return 0;

}