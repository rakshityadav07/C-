#include <iostream>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int d){
		data=d;
	}
};


void push(node*&head ,int data){

	node* ptr1 = new node(data);
	node* temp = head;
	ptr1->next = temp;

	if(head!=NULL){
		while(temp->next!=head) {
			temp=temp->next;
		}
		temp->next=ptr1;
	}
	else{
		ptr1->next=ptr1;
	}
	head=ptr1;
}

void printCLL(node*head){

	if(head==NULL){
		return;
	}

	node*temp=head;

	while(temp->next!=head){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	// Print the last node
	cout<<temp->data<<"->";
}


void buildList(node*&head){

	int d;
	cin>>d;

	while(d!=-1){
		push(head,d);
		cin>>d;
	}
}	

istream& operator>>(istream& is,node*&head){
	buildList(head);
	return is;
}

ostream& operator<<(ostream& os,node*&head){
	printCLL(head);
	return os;
}

int main(){

	node*head = NULL;

	// buildList(head);
	// push(head,10);
	// push(head,20);
	// push(head,30);
	// push(head,40);
	// push(head,50);

	cin>>head;
	cout<<head;

}