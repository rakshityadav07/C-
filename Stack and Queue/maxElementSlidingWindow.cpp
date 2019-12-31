#include <iostream>
#include <deque>
using namespace std;

int main(){

	int n;
	int k;
	int a[100000];

	cin>>n;
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}

	cout<<"k: ";
	cin>>k;

	deque<int> Q(k);

	int i;
	for (i = 0; i < k; ++i){

		while(!Q.empty() && a[i]>a[Q.back()]){
			Q.pop_back();
		}
		Q.push_back(i);
	}
	for (; i < n; ++i){
		cout<<a[Q.front()]<<" ";

		// 1.Remove the element which are not the part of window(contraction)
		while(!Q.empty() && (Q.front()<=i-k)) {
			Q.pop_front();
		}

		// 2.Remove the element which are not useful and are part of the window
		while(!Q.empty() && (a[i]>a[Q.back()])) {
			Q.pop_back();
		}

		// 3.Add the new element(Expansion)
		Q.push_back(i);
	}
	// Print the last element in the deque
	cout<<a[Q.front()]<<" ";
	
	return 0;
}
