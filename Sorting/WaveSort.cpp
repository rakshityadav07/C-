#include <iostream>
using namespace std;

void WaveSort(int a[100],int n){

	for (int i = 0; i < n; i+2){
		
		//check for the left element
		if(i>0 && a[i-1]>a[i]){
			swap(a[i] ,a[i-1]);
		}

		//check for the right element
		if(i<=n-2 && a[i+1]>a[i]){
			swap(a[i+1],a[i]);
		}
	}
}


int main(){

	int n;
	cin >> n;

	int a[100];

	for (int i = 0; i < n; ++i){
		cin >> a[i] ;
	}

	WaveSort(a,n);

	for (int i = 0; i < n; ++i){
		cout << a[i] << " " ;
	}

}