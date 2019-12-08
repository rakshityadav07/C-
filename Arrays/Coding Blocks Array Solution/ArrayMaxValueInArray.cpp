#include <iostream>
using namespace std;

int main(){

	int n;
	cout<<"no of inputs: ";
	cin>>n;

	int arr[100];

	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	int max = arr[0];

	for (int i = 0; i < n; ++i){
		if(max<arr[i]){
			max = arr[i];
		}
	}

	cout << max << endl;

}