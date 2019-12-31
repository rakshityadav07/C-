/*Check Balanced Tree
And Build Balanced Tree*/ 
#include <iostream>
#include <queue>
#include <algorithm>
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

class HBPair{
public:
	int height;
	bool balance;
};

HBPair isHeightBalances(node *root){

	HBPair p;

	if(root==NULL){
		p.height=0;
		p.balance=true;
		return p;
	}

	HBPair left = isHeightBalances(root->left);
	HBPair right = isHeightBalances(root->right);

	p.height = max(left.height,right.height) + 1;
	if((abs(left.height - right.height) <= 1) && left.balance && right.balance){
		p.balance = true;
	}
	else{
		p.balance = false;
	}
	return p;
}


node *buildBalancedTree(int *a,int s,int e){

	//Base case;
	if(s>e){
		return NULL;
	}

	int mid = (s+e)/2;
	//Recursive Case
	node *root = new node(a[mid]);
	root->left = buildBalancedTree(a,s,mid-1);
	root->right = buildBalancedTree(a,mid+1,e);

	return root;
}


int main(){
	// node*root=buildTree();	
	// printKthLevel(root,3);
	// cout<<endl;
	// printAllLevels(root);
	// cout<<endl;
	// bfs(root);
	// cout<<endl;
	
	int a[ ]={1,2,3,4,5,6,7};
	int n = 7;
	node *root = buildBalancedTree(a,0,n-1);
	bfs(root);

	return 0;
}