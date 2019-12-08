#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void Rotate(char *a,int k){

	int i = strlen(a) ;
	cout << i <<endl;
	while(i >= 0) {
		a[i+k] = a[i] ;
		i--;
	}

	i = strlen(a);
	int s = 0;
	int j = i-k ;
	while(j < i){
		a[s] = a[j] ;
		s++;
		j++;
	}
	//so here the string will terminate
	a[i-k] = '\0';

}

int main(){

	char a[100] = "Rakshit yadav";
	int k;
	cout <<"Rotate by : "<<endl ;
	cin >> k ;

	Rotate(a,k);
	cout << a << endl ;

}
