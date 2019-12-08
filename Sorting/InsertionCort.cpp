#include <iostream>
#include <algorithm>

using namespace std;

void InsertionSort(int a[100],int n){

	for (int i = 1; i < n; ++i){
		
		int j=i-1;
		int no = a[i];

		while(j>=0 && a[j] > no){

			a[j+1] = a[j];
			j--;
		}

		a[j+1] = no ;

	}

}

int main(){

	int n;
	cin >> n ;

	int a[100];

	for (int i = 0; i < n; ++i){
		cin >> a[i] ;
	}

	InsertionSort(a,n);

	for (int i = 0; i < n; ++i){
		cout << a[i] << " " ;		
	}

}