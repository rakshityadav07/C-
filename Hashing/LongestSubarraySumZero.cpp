#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void checkSubarraySumZero(int *arr,int n){

	unordered_map<int,int> m;
	int pre = 0;
	int len = 0;
	for (int i = 0; i < n; ++i){
		pre += arr[i];
		if(arr[i]==0 && len==0) len = 1;
		if(pre == 0) len = max(len,i+1); //i+1 because we have 0 based indexing

		if(m.find(pre) != m.end()){
			len = max(len , i - m[pre]);
		}
		m.insert(make_pair(i,pre));
	}
	return len;
}

int main(){
	int n;
	cin>>n;
	int *arr = int [n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	int b = checkSubarraySumZero(arr,n);
	cout<<b<<endl;
}