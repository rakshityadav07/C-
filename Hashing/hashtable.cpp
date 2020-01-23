#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class node{
public:
	string key;
	T value;
	node<T> *next;

	node(string k,T v){
		key = k;
		value = v;
	}
};

template <typename T> 
class hashtable{
	int cs; // current size;
	int ts; //Table Size;
	node<T> **buckets;

	int hashFun(string key){
		int L = key.length();
		int ans = 0;
		int p = 1; /// because 37^0 = 1 initially
		for (int i = 0; i < L; ++i){
			ans += key[L-i-1]*p;
			// we increase the p by power of 1 
			p = p*37;
			p %= ts;
			ans %= ts;
		};
		return ans;
	}

public:
	// ds is default size
	hashtable(int ds = 7){
		cs = 0;
		ts = ds;
		buckets = new node<T> *[ts];
		// Make all the addresses as NULL;
		for (int i = 0; i < ts	; ++i){
			buckets[i] = NULL;
		}
	}

	void insert(string key,T value){
		int i = hashFun(key);
		node<T>* n = new node<T>(key,value);
		n->next = buckets[i];
		buckets[i] = n;

	}

	// Print 
	void print(){
		for (int i = 0; i < ts; ++i){
			node<T> *temp = buckets[i];
			cout<<"bucket "<<i<<" ";
			while(temp!=NULL){
				cout<<temp->key<<"-->";
				temp=temp->next;
			}
			cout << endl;
		}
	}

	T* search(string key){
		int i = hashFun(key); 
		node<T> *temp = buckets[i];
		while(temp!=NULL){
			if(temp->key==key){
				return &(temp->value); 
			}
			temp=temp->next;
		}
		return NULL;
	}

	T* erase(string key){
		int i = hashFun(key);
		node<T> *temp = buckets[i];
		node<T> *prev = temp;

		while(temp!=NULL){
			if(temp->key==key){
				if(temp->next!=NULL){
					prev->next=temp->next;
				}
				prev->next = NULL;
			}
			temp = temp->next;
			prev->next = temp;
		}
	}

	// void deleteAtMiddle(node*&head,int p){

	// 	if(head==NULL){
	// 		return;
	// 	}

	// 	if(head->next==NULL){
	// 		deleteAtHead(head);
	// 	}

	// 	node*temp=head->next;
	// 	node*prev=head;
	// 	int len=1;
	// 	while(len<=p-1){
	// 		temp=temp->next;
	// 		prev=prev->next;
	// 		len++;
	// 	}
	// 	prev->next=temp->next;
	// 	delete temp;

};

int main(){

	hashtable<int> h(11) ;
	h.insert("Mango",100);
	h.insert("Apple",170);
	h.insert("Guava",140);
	h.insert("Banana",130);
	h.insert("Chiku",120);

	string s;
	cin>>s;

	// int *f = h.search(s);
	// if(f==NULL){
	// 	cout<<"Not found"<<endl;
	// }else{
	// 	cout<<"price : "<<*f<<endl;
	// }

	h.erase(s);
	h.print();

}
