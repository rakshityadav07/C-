#include <iostream>
#include <algorithm>
using namespace std;

void selectionsort(int arr[100],int n){

	for (int i = 0; i < n-1 ; ++i){
		//assume that current index is min
		int minIndex = i ;
		//Min element in the remaining part
		for (int j = i+1 ; j <n ; ++j){
			if(arr[j]<arr[minIndex]){
				minIndex = j ;
			}
		}
		//minimum index min. element
		swap(arr[minIndex],arr[i]);
	}
}


int main(){

	int arr[100];
	int n;
	cin >> n ;

	for (int i = 0; i < n; ++i)	{
		cin >> arr[i];
	}

	selectionsort(arr,n);

	for (int i = 0; i < n; ++i){
		cout << arr[i] << " " ;
	}
	cout << endl ;

}