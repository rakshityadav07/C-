#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int LongestConsecutiveSeq(int *a,int n){

	unordered_set<int> s;
	for (int i = 0; i < n; ++i){
		s.insert(a[i]);
	}
	int ans = 0;
	// int count = 0;
	for (int i = 0; i < n; ++i){
		if(s.find(a[i]-1) != s.end()){
			continue;
		}else{
			int  count = 0;
			while(s.find(a[i]) != s.end()){
				count++;
				i++;
			}
			ans = max(ans,count);
		}
	}
	return ans;
}

int main(){

	int n;
	cin>>n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	int b = LongestConsecutiveSeq(a,n);
	cout<<b;

}
