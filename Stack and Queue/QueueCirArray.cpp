#include <iostream>
using namespace std;

class Queue{
	int *arr;
	int ms;
	int cs;
	int front;
	int rear;
public:

	Queue(int defaultSize = 9){
		ms = defaultSize;
		cs = 0;
		front  = 0;
		rear = defaultSize - 1 ;
		arr = new int[ms]();
	}

	bool isfull(){
		return cs==ms;
	}

	bool isEmpty(){
		return cs==0;
	}

	void enqueue(int data){
		if(!isfull()){
			rear = (rear+1)%ms;
			arr[rear] = data;
			cs++;
		}
	}

	void dequeue(){
		if(!isEmpty()){
			front = (front+1)%ms;
			cs--;
		}
	}

	int getFront(){
		return arr[front];
	}

};

int main(){

	Queue q(10);

	for (int i = 0; i <= 6; i++){
		q.enqueue(i);
	}
	q.dequeue();
	q.enqueue(8);
	while(!q.isEmpty()){
		cout << q.getFront() << " ";
		q.dequeue();
	}

	return 0;

}