#include <iostream>
#include <queue>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

node *insertInBST(node*root,int data){

	if(root==NULL){
		return new node(data);
	}

	// Recursive case
	if(data<=root->data){
		root->left = insertInBST(root->left,data);
	}
	else{
		root->right = insertInBST(root->right,data);
	}

	return root;

}


node* deleteInBST(node*root,int data){

	if(root==NULL){
		return NULL;
	}
	else if(data<root->data){
		root->left = deleteInBST(root->left,data);
		return root;
	}
	else if(data==root->data){
		// 3 cases 0,1,2 children;

		// 1. Node with 0 children -Leaf node
		if(root->left==NULL && root->right==NULL){
			delete root;
			return NULL;
		}
		// 2. Node with 1 children
		if(root->left!=NULL && root->right==NULL){
			node* temp = root->left;
			delete root;
			return temp;
		}
		if(root->left==NULL && root->right!=NULL){
			node* temp = root->right;
			delete root;
			return temp;
		}
		// 3. Node with 2 Children
		node* replace = root->right;
		// Inorder successor from the right subtree
		// Here we find the leftmost element in the tree
		while(replace->left!=NULL) {
			replace = replace->left;
		}
		
		root->data = replace->data;
		// Here we delete that node which is replacing the root and we provide the 
		// right side of the root & data which we need to delete from right sub tree 
		root->right = deleteInBST(root->right,replace->data);
		return root;
	}
	else{
		root->right = deleteInBST(root->right,data);
	}

}

void bfs(node *root){

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* f = q.front();
		if(f==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<f->data<<" ,";
			q.pop();

			if(f->left){
				q.push(f->left);
			}
			if(f->right){
				q.push(f->right);
			}
		}
	}
	return;
}

void Inorder(node*root){

	if(root==NULL){
		return;
	}

	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);

}

node* build(){

	int d;
	cin>>d;

	node* root = NULL;

	while(d!=-1){
		root = insertInBST(root,d);
		cin>>d;
	}
	return root;
}

bool search(node*root,int data){

	if(root==NULL){
		return false;
	}

	if(root->data==data){
		return true;
	}

	if(data<=root->data){
		search(root->left,data);
	}
	else{
		search(root->right,data);
	}
}

int main(){

	node*root = build();
	// Inorder(root);
	// cout<<endl;
	// bfs(root);

	// int s;
	// cin>>s;
	// if(search(root ,s)){
	// 	cout<<"Present";
	// }else{
	// 	cout<<"Not Present";
	// }

	int s;
	cin>>s;
	root = deleteInBST(root,s);
	Inorder(root);
	cout<<endl;
	bfs(root);

}