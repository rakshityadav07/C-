/*Inorder(left,root,right)
PostOrder(left,right,root)*/ 
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

node* buildTree(){

	int d;
	cin>>d;

	if(d==-1){
		return NULL;
	}

	node*root = new node(d);
	root->left=buildTree();
	root->right=buildTree();
	return root;
}

// PreOrder Print 
void print(node*root){

	if(root==NULL){
		return;
	}

	//Otherwise print the root first followed by subtrees(children) 
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);

}

// Inorder Print
void printIn(node*root){
	if(root==NULL){
		return;
	}

	printIn(root->left);
	cout<<root->data<<" ";
	printIn(root->right);

}

void printPO(node*root){
	if(root==NULL){
		return;
	}

	printPO(root->left);
	printPO(root->right);
	cout<<root->data<<" ";

}

int main(){
	
	node*root=buildTree();	
	print(root);
	cout<<endl;
	printIn(root);
	cout<<endl;
	printPO(root);
	return 0;

}