#include <iostream>
#include <stack>
using namespace std;

void transfer(stack<int>& s1,stack<int>& s2,int n){

	for (int i = 0; i < n; ++i){
		s2.push(s1.top());
		s1.pop();
	}
}

void reversestack(stack<int>& s1){
	stack<int> s2;

	int n = s1.size();

	for (int i = 0; i < n; ++i){
		// Pop the topmost element from the s1 
		int x = s1.top();
		s1.pop();
		// the elements which are left in the stack after popping out the yop most element
		int nVacate = n-i-1;
		// we transfer all the elements from the s1 -> s2 
		transfer(s1,s2,nVacate);
		// the top element poped from s1 is inserted to the s1 again 
		s1.push(x);
		// transfer the rest of the elements from s2 -> s1;
		transfer(s2,s1,nVacate);
	}
}

int main(){

	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	reversestack(s);

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}


}