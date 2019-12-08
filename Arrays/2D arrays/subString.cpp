#include <iostream>
using namespace std;

void printSubstring(char *a){

	//for all the values of i and j
	for (int i = 0;a[i] != '\0' ; ++i){
		//For every i , j will start from i and go till end
		for (int j = i; a[j] != '\0'; ++j){
			//print all the char from i to j
			for (int k = i; k <= j ; ++k){
				cout << a[k] ;
			}
			cout << endl ;
		}
	}

}

int main(){

	char str[4] ="abc" ;
	printSubstring(str);

}