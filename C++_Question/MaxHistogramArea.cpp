#include<bits/stdc++.h> 
using namespace std; 

int getMaxArea(int hist[], int n) { 

	stack<int> s; 

	int max_area = 0;  
	int tp;  
	int area_with_top1, area_with_top2; 
	int i = 0; 
	while (i < n) 
	{ 
		if (s.empty() || hist[s.top()] <= hist[i]) {
			s.push(i++); 
		}
		else
		{ 
			tp = s.top();  
			s.pop();  
			if(s.empty()){
				area_with_top1 = hist[tp] * i;
			}
			else{
				area_with_top2 = hist[tp] * (i - s.top() - 1);
			}
			max_area = max(area_with_top1 , area_with_top2);
		} 
	}

	while (s.empty() == false) { 
		tp = s.top();  
		s.pop();  
		
		if(s.empty()){
			area_with_top1 = hist[tp] * i;
		}
		else{
			area_with_top2 = hist[tp] * (i - s.top() - 1);
		}
		max_area = max(area_with_top1 , area_with_top2); 
	} 

	return max_area; 
} 

int main() 
{ 
	int n;
	cin>>n;

	int a[n];

	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	cout<<getMaxArea(a,n);
} 