#include <iostream>
#include<deque>
using namespace std;

void printKMax(int *arr,int n,int k){

	deque<int> q(k);

	int i;
	for (i = 0; i < k; ++i){
		while(!q.empty() && arr[i]>arr[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}

	//For the remaining elements;
	for (; i<n; i++){
		cout<<arr[q.front()]<<" ";

		// 1.Remove the elements which are not present in the window;
		while(!q.empty() && (q.front()<=i-k)){
			q.pop_front();
		}
		// 2.Remove the elements which are not useful and are in window
		while(!q.empty() && arr[i]>=arr[q.back()]){
			q.pop_back();
		}
		// 3.Add the new elements
		q.push_back(i);
	}

	// print the ans for the last window;
	cout<<q.front();

}

int main(){

	int n;
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	int k;
	cin>>k;

	printKMax(arr,n,k);

	return 0;

}