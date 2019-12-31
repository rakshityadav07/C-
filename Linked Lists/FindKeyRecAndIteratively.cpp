/*Insertion
1.at head
2.at middle
3.at end
*/

#include <iostream>
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

void insertAtMiddle(node*&head,int data,int p){

	if(head==NULL||p==0){
		insertAtHead(head,data);
	}
	else if(p>len(head)){
		insertAtTail(head,data);
	}
	else{
		node*temp=head;
		int jump=1;
		while(jump<=p-1){
			temp=temp->next;
			jump++;
		}
		node*n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}

}

void print(node*head){
	// node*temp=head;
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
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


void deleteAtEnd(node*&head){

	if(head==NULL){
		return;
	}
	node*temp=head;
	node*prev=NULL;

	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;
	}
	delete temp;
	prev->next=NULL;
	return;
}


void deleteAtMiddle(node*&head,int p){

	if(head==NULL){
		return;
	}

	if(head->next==NULL){
		deleteAtHead(head);
	}

	node*temp=head->next;
	node*prev=head;
	int len=1;
	while(len<=p-1){
		temp=temp->next;
		prev=prev->next;
		len++;
	}
	prev->next=temp->next;
	delete temp;

}
// 1->2->3->4


//Recursive case
bool searchRecursive(node*head,int key){

	if(head==NULL){
		return false;
	}
	if(head->data==key){
		return true;
	}else{
		return searchRecursive(head->next,key);
	}
	return false;
}


bool searchIteratively(node*head,int key){


	while(head!=NULL){
		if(head->data==key){
			return true;
		}
		head=head->next;
	}
	return false;
}


int main(int argc, char const *argv[])
{
	node*head=NULL;

	insertAtHead(head,5);
	insertAtHead(head,4);
	insertAtHead(head,3);
	insertAtTail(head,6);
	insertAtMiddle(head,2,3); 

	print(head);
	deleteAtEnd(head);
	print(head);	
	deleteAtMiddle(head,2);
	print(head);	


	if(searchRecursive(head,4)){
		cout<<"element is present"<<endl;
	}else{
		cout<<"element is not present"<<endl;
	}

	if(searchIteratively(head,41)){
		cout<<"element is present"<<endl;
	}else{
		cout<<"element is not present"<<endl;
	}
	return 0;
}

