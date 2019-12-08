#include <iostream>
#include <algorithm>
using namespace std;

void mergeArrays(int a[],int b[],int n1,int n2,int c[]){

	int j = 0 ;
	int i = 0 ;
	int k = 0 ;

	while(i < n1 && j < n2){
		if(a[i] < b[j]){
			c[k] = a[i];
			i++;
			k++;
		}else{
			c[k] = a[j];
			k++;
			j++;
		}
	}
	//if the one array is less elmeent then one array will be finished early
	//so for this
	while(i < n1) {
		c[k] = a[i];
		k++;
		i++;
	}
	while(j  < n2) {
		c[k] = b[j];
		k++;
		j++;
	}
}

int main(){

	int n1,n2;
	cin >> n1 >> n2 ;

	int a[n1];
	int b[n2];

	for (int i = 0; i < n1; ++i){
		cin >> a[i];
	}

	for (int i = 0; i < n2; ++i){
		cin >> b[i];
	}

	int c[n1+n2];

	mergeArrays(a,b,n1,n2,c);
	sort(c,c+(n1+n2));
	medianArray(a,b,n1,n2);

	for (int i = 0; i < n1+n2; ++i){
		cout << c[i] ;
	}
	
}