#include <iostream>

using namespace std;

void sort(int a[],int n){

	int lo = 0;
	int mid = 0;
	int hi = n-1;	

	while(mid<=hi){

		if(a[mid] == 1){
			mid++;
		}
		else if(a[mid]==2){
			swap(a[mid],a[hi]);
			hi--;
		}
		else{
			swap(a[mid],a[lo]);
			mid++,lo++;
		}

	}

}

int main(){

	int n;
	cin >> n ;

	int a[100];

	for (int i = 0; i < n; ++i){
		cin >> a[i] ;
	}

	sort(a,n);

	for (int i = 0; i < n; ++i){
		cout << a[i] << " " ;
	}

}