#include <iostream>
using namespace std;

void set_ith_bit(int &n,int i){

	int mask = 1<<i;
	n = (n|mask);
}

int main(){

	int n,i;
	cin >> n >> i ;

	set_ith_bit(n,i);
	cout << n << endl; 

}