#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class queueUsingstack{
	stack<int>* s1;
	stack<int>* s2;
public:

	queueUsingstack(){
		s1 = new stack<int>;
		s2 = new stack<int>;
	}

	void push(int data){
		s1->push(data);
	}

	void pop(){
		int n=s1->size();

		for (int i = 0; i < n-1; ++i){
			s2->push(s1->top());
			s1->pop();
		}
		if(!s1->empty()){
			s1->pop();
		}
		int n1 = s2->size();
		for (int i = 0; i < n1; ++i){
			s1->push(s2->top());
			s2->pop();
		}
	}

	int top(){
		int n=s1->size();

		for (int i = 0; i < n-1; ++i){
			s2->push(s1->top());
			s1->pop();
		}
		int top = s1->top();
		if(!s1->empty()){
			s2->push(s1->top());
			s1->pop();
		}
		int n1 = s2->size();
		for (int i = 0; i < n1; ++i){
			s1->push(s2->top());
			s2->pop();
		}

		return top;
	}

	~queueUsingstack(){
		delete s1;
		delete s2;
	}
};

int main(){

	queueUsingstack q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout<<q.top()<<" ";
	q.pop();
	q.push(5);
	cout<<q.top()<<" ";


}