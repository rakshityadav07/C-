#include <iostream>
#include <stack>
using namespace std;

void printSpan(int arr[],int n){

	stack<int> s;
	int ans[100] = {};
	for (int day = 0; day < n; ++day){
		int curPRice = arr[day];
		// arr[s.top()] because stack is going to store index
		while(!s.empty() && arr[s.top()] < curPRice){
			s.pop();
		}
		// Calculates the span by first getting the topmost index present in the span after poping 
		int betterDay = s.empty() ? 0 : s.top();
		int span = day - betterDay ;
		ans[day] = span ;
		// push the day in the stack 
		s.push(day) ;
	}

	for (int i = 0; i < n; ++i){
		cout << ans[i] << " " ;
	}
}

int main(){

	int n=7;
	int arr[100]={100,80,60,70,60,75,85};
	printSpan(arr,n);
	return 0;
}