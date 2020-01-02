#include <iostream>
#include <stack>
using namespace std;

class node{

public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;
	}
};

void insertAtHead(node*&head,int data){
	node*n=new node(data);
	n->next=head;
	head=n;
}

int len(node*head){
	int len=0;
	while(head!=NULL){
		head=head->next;
		len++;
	}
	return len;
}

void insertAtTail(node*&head,int data){

	if(head==NULL){
		insertAtHead(head,data);
		return;
	}

	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	node*n=new node(data);
	temp->next=n;

}

void deleteAtHead(node*&head){
	if(head==NULL){
		return;
	}
	node*temp=head;
	head=head->next;
	delete temp;
	return;
}

void print(node*head){
	// node*temp=head;
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}


int main(){

	node *head = NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	// deleteAtHead(head);
	deleteAtHead(head);
	insertAtTail(head,33);
	print(head);


}