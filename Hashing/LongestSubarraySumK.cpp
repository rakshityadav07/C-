#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int longestSubarraySumK(int *a,int n,int k){

	int pre = 0;
	int len = 0;
	unordered_map<int,int> m;

	for (int i = 0; i < n; ++i){
		pre += a[i];
		if(pre == k){
			len = max(len,i+1);
		}
		if(m.find(pre - k) != end()){
			len = max(len ,i - m[pre-k]);
		}
		s.insert(make_pair(pre,i))
	}
	return len;
}

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n;

	int *a = new int[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	cout<<"K: ";
	cin>>k;
	int b = longestSubarraySumK(a,n);
	cout<<b<<endl;
	return 0;
}

