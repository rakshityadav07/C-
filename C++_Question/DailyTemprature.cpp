#include <iostream>
#include <stack>
using namespace std;

void DailyTemprature(int a[],int n){

	stack<int> s;
	int ans[100] = {0};
	for (int i = n - 1; i >= 0; --i) {
		while (!s.empty() && a[i] >= a[s.top()])
			s.pop();
		
		int betterDay = s.empty() ? 0 : s.top();
		int span = betterDay - i;
		ans[i] = span;
		// Yahan 0 output aa raha hai jiska koi bada element nahi pr uper wale mein -6 and -7 aa raha hai
		// ans[i] = s.empty() ? 0 : s.top() - i;
		s.push(i);
	}	

	for (int i = 0; i < n; ++i){
		cout<<ans[i]<<" ";
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int a[100];

	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}

	DailyTemprature(a,n);
	return 0;
}
