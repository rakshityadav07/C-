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

void print(node*head){
	// node*temp=head;
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

void buildList(node*&head){

	//This is only for the first node
	int data;
	cin>>data;

	//after first node is been entered
	while(data!=-1){
		insertAtTail(head,data);
		cin>>data;
	}

}

istream& operator>>(istream& is,node*&head){
	buildList(head);
	return is;
}

ostream& operator<<(ostream& os,node*&head){
	print(head);
	return os;
}

node* ReverseRecursive(node*&head){

	if(head->next==NULL||head==NULL){
		return head;
	}

	node*smallHead=ReverseRecursive(head->next);
	node*C=head;
	C->next->next=C;
	C->next=NULL;

	return smallHead;
}

node* rotate(node* head, int k) {
    // Your code here
	node *ptr=head,*temp=head;
	while(k>1){
		ptr=ptr->next;
		k--;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}

	temp->next=head;

	head=ptr->next;
	ptr->next=NULL;
	return head;

}


int main(int argc, char const *argv[])
{
	node*head=NULL;
	node*head2=NULL;

	cin>>head;
	head = ReverseRecursive(head);
	cout<<head<<endl;
	// cout<<head2<<endl;

	int ctr;
	cin>>ctr;
	node *k = rotate(head,ctr);
	cout<<k<<endl;
	return 0;
}

