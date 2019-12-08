#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	
	int arr[n];

	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	int key;
	cout<< "Input the key: " <<endl;
	cin>>key;

	int i;
	for (i = 0; i < n; ++i){
		if(key == arr[i]){
			cout<<"found the element at position : " << i <<endl;
			break; 
		}
	}
	if(i == n ){
		cout<<"The key is not present "<<endl;
	}

}