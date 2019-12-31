// Diameter of tree
// Time complexity=O(n2)
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

void print(node*root){

	if(root==NULL){
		return;
	}
	//Otherwise print the root first followed by subtrees(children) 
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}

int height(node*root){
	if(root==NULL){
		return 0;
	}

	int ls = height(root->left);
	int rs = height(root->right);

	return max(ls,rs)+1;
}

void printKthLevel(node*root,int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}

	printKthLevel(root->left,k-1);
	printKthLevel(root->right,k-1);
	return;
}

void printAllLevels(node*root){

	if(root==NULL){
		return;
	}
	int h = height(root);
	for (int i = 1; i <= h; ++i){
		printKthLevel(root,i);
		cout<<endl;
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

int count(node*root){
	if(root==NULL){
		return 0;
	}
	return 1+count(root->left)+count(root->right);
}

int sum(node*root){

	if(root==NULL){
		return 0;
	}
	return root->data + sum(root->left) + sum(root->right);
}

int diameter(node*root){

	if(root==NULL){
		return 0;
	}
	int h1= height(root->left);
	int h2= height(root->right);
	int op1 = h1+h2;
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);

	return max(op1,max(op2,op2));
}

class Pair{
public:
	int height;
	int diameter;
};


Pair fastDiameter(node*root){

	Pair p;

	if(root==NULL){
		p.height=p.diameter=0;
		return p;
	}
	//Otherwise
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	p.height = max(left.height,right.height) + 1;
	p.diameter = max(left.height+right.height,max(left.diameter,right.diameter));

	return p;
}

int main(){
	node*root=buildTree();	
	// printKthLevel(root,3);
	// cout<<endl;
	// printAllLevels(root);
	// cout<<endl;
	// bfs(root);
	// cout<<endl;
	// cout<<count(root)<<endl;
	// cout<<sum(root)<<endl;
	// cout<<diameter(root)<<endl;

	Pair p = fastDiameter(root);
	cout<<p.height<<endl; 
	cout<<p.diameter<<endl;

	return 0;
}