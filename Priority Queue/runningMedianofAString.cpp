#include <iostream>
#include <queue>
#include <vector>

using namespace std;


void runnningMedianOfString(double arr[], int n){

	// Max heap
	priority_queue<double> s; 
	// Min heap
	priority_queue<double,vector<double>,greater<double> > g; 

	double med = arr[0]; 
	s.push(arr[0]); 

	cout << med << endl; 

	for (int i=1; i < n; i++) { 
		double x = arr[i]; 

        // case 1 : Max heap is greater than the min heap (left side heap has more elements) 
		if (s.size() > g.size()) { 
			if (x < med) 
			{ 
				g.push(s.top()); 
				s.pop(); 
				s.push(x); 
			} 
			else
				g.push(x); 

			med = (s.top() + g.top())/2.0; 
		} 

        // case 2 : (both heaps are balanced) 
		else if (s.size()==g.size()) 
		{ 
			if (x < med) 
			{ 
				s.push(x); 
				med = (double)s.top(); 
			} 
			else
			{ 
				g.push(x); 
				med = (double)g.top(); 
			} 
		} 

        // case 3 : Min heap > Max heap  (right side heap has more elements) 
		else
		{ 
			if (x > med) 
			{ 
				s.push(g.top()); 
				g.pop(); 
				g.push(x); 
			} 
			else
				s.push(x); 

			med = (s.top() + g.top())/2.0; 
		} 

		cout << med << endl; 
	} 
} 

int main(){

	int n;
	cin>>n;
	double arr[100];
	for (int i = 0; i < n; ++i){
		cin >> arr[i] ;
	}
	return 0;

}

