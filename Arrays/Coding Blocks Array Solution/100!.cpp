#include <iostream>
#define max 10000
using namespace std;

int multiply(int x,int result[],int res_size){

	int carry = 0 ;

	for (int i = 0; i < res_size; ++i){
		
		int prod = result[i]*x + carry ;
		result[i] = prod%10;
		carry = prod/10;
	}
	while(carry){

		result[res_size] = carry%10;
		carry = carry/10;
		res_size++;

	}      

	return res_size ;

}

void factorial(int n){

	int result[max];

	result[0] = 1;
	int res_size = 1 ;

	for (int i = 2; i <= n; ++i){
		res_size = multiply(i,result,res_size);
	}

	//for printing the factorial of given no in 
	//reverse order
	for (int i = res_size-1; i >= 0; i--){
		cout << result[i] ;
	}

}

int main(){

	int n;
	cin >> n;

	factorial(n);
}