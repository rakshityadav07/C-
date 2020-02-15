#include <iostream>
#include <stack>
using namespace std;

int MaxHistogramArea(int a[],int n){
	stack<int> s;

	int HistogramArea1,HistogramArea2;
	int maxArea = 0;
	int i = 0;
	for (i; i < n; ++i){
		// if current element is higher than the stack top then insert in stack because it will not hinder to form the area 
		// otherwise pop the element
		if(s.empty() && a[s.top()] < a[i]){
			s.push(i);
		}
		else{
			int top = s.top();
			s.pop();
			if(s.empty()){
				HistogramArea1 = a[i] * i;
			}else{
				HistogramArea2 = a[top] * (i - top - 1);
			}
			maxArea = max(HistogramArea1,HistogramArea2);
		}
	}

	//Now pop the remaining bars and calculate the area when stack is empty or is not empty
	while(!s.empty()){
		int top = s.top();
		s.pop();
		if(s.empty()){
			HistogramArea1 = a[top] * i;
		}else{
			HistogramArea2 = a[top] * (i - top - 1);
		}
		maxArea = max(HistogramArea1,HistogramArea2);
	}

}

int main(){

	int n;
	cin>>n;

	int a[n];

	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}

	int ans = MaxHistogramArea(a,n);
	cout<<ans;

	return 0;
}
