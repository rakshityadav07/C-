#include <iostream>
#include <stack>
using namespace std;

void NextGreaterElementCircular(int a[],int n){
	stack <int> s;
	s.push(a[0]);
	for (int i = 1; i < n; ++i){
		if(s.empty()){
			s.push(a[i]);
			// continue;
		}
		while(s.empty()==false && s.top() < a[i]){
			cout<<s.top()<<" --> "<<a[i]<<endl;
			s.pop();
		}
		s.push(a[i]);
	}

	while(s.empty()==false){
		cout<<s.top()<<" --> "<<-1<<endl;
		s.pop();
	}
}

int main(){

	int n;
	cin>>n;

	int a[100];

	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}

	NextGreaterElementCircular(a,n);

}
