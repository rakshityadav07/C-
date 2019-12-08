#include <iostream>
#include <cstring>
using namespace std ;

int main(){

	char a[100] ;
	cin.getline(a,100) ;

	char *ptr ;
	ptr = strtok(a," ,") ;

	while(ptr != NULL){
		cout  << ptr << endl ;
		ptr = strtok(NULL," ,") ;
	}

}