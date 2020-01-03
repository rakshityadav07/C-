// 2 ways to solve this problem 
// a. By making push operation effecient O(1) and pop is O(n);
// b. By making pop operation effecient O(1) and push is O(n);

// Here we are making push operation effecient
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// remain unknown
class stackUsingQueue{
	queue<int>* q1;
	queue<int>* q2;
public:
	stackUsingQueue(){
		q1 = new queue<int> ;
		q2 = new queue<int> ;
	}

	void push(int x){
		q1->push(x);
	}

	void pop(){
		int n = q1->size();
		// Now pop n-1 elements from q1 to q2;
		for (int i = 0; i < n-1; ++i){
			q2->push(q1->front());
			q1->pop();
		}
		// And now we pop the last element in the q1
		// if queue contains only one element so this pop will not occur and we can check by if queue is empty
		if(!q1->empty()){
			q1->pop();
			// and swap the queue
			swap(q1,q2); // Here we maintains the definition that q2 is always empty;
		}
	}
	int top(){

		int n = q1->size();
		// Now pop n-1 elements from q1 to q2;
		for (int i = 0; i < n-1; ++i){
			q2->push(q1->front());
			q1->pop();
		}
		int getFront = q1->front();
		if(!q1->empty()){
			q2->push(q1->front());
			q1->pop();
			// and swap the queue
			swap(q1,q2); // Here we maintains the definition that q2 is always empty;
		}
		return getFront ;
	}

	~stackUsingQueue(){
		delete q1;
		delete q2;
	}
};

int main(){
	stackUsingQueue s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<s.top() <<" ";
	s.pop();
	// s.pop();
	cout<<s.top();

}