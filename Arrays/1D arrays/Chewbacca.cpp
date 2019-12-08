#include <iostream>
using namespace std ;

int main(){

	char a[50];
	cin >> a ;

	int i ;
	if(a[0] == '9'){
		i++;
	}
	
	//iterate over the remaining character
	for (int i = 0;a[i]!= '\0'; ++i){
		
		//to convert the char into the integer
		int curDigit = a[i] - '0' ;

		if(curDigit >= 5){
			curDigit = 9 - curDigit ;
			a[i] = curDigit + '0';
		}

	}
	
	cout << a <<endl ;

}