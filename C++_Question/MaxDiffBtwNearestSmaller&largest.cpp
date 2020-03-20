#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

void leftSmaller(int a[],int n,int ans[]){

	stack<int> s;

	/*For left part*/
	for (int i = 0; i < n; ++i){

		while(!s.empty() && s.top() >= a[i]){
			s.pop();
		}
		
		if(!s.empty()){
			ans[i] = s.top();
		}else{
			ans[i] = 0;
		}
		s.push(a[i]);
	}
}

int findMaxDiff(int a[], int n){
	int left[n];w
	int right[n];
	leftSmaller(a,n,left);
	reverse(a,a+n);
	leftSmaller(a,n,right);

	int result = -1;
	for (int i = 0; i < n; ++i){
		result = max(result , (left[i] - right[n-i-1]) );
	}

	return result;

}

int main()
{
	int n;
	cin>>n;

	int a[100];

	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int ans = findMaxDiff(a,n);
	cout<<ans;

	return 0;

}
