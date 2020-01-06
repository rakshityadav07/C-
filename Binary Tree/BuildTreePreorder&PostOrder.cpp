/*Inorder(left,root,right)
Preorder(root,left,right)
PostOrder(left,right,root)*/ 
#include <iostream>
#include <queue>
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

node *createTreeFromTrav(int *in,int *pre,int s,int e){
	static int i = 0;

	// Base Case
	if(s>e){
		return NULL;
	}

	// Recursive case;
	node* root = new node(pre[i]);
	int index = -1;

	for (int j=s;s<=e;++j){
		if(in[j]==pre[i]){
			index = j;
			break;
		}
	}
	i++;
	root->left = createTreeFromTrav(in,pre,s,index-1);
	root->right = createTreeFromTrav(in,pre,index+1,e);
	return root;
}

int main(){
	
	int in[] = {3,2,8,4,1,6,7,5};
	int pre[] = {1,2,3,4,8,5,6,7};
	int n = sizeof(in)/sizeof(int);

	node*root = createTreeFromTrav(in,pre,0,n-1);
	bfs(root);

	return 0;

}