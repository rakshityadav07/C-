#include <iostream>

using namespace std;

int Extract_ith_bit(int a,int b){
	return (a & (1<<b))!=0?1:0;
}

int main(){

	int a,b;
	cin >> a >> b ;

	cout << Extract_ith_bit(a,b);
	return 0;

}