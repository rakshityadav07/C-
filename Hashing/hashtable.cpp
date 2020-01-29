#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <math.h>

using namespace std;

template<typename T>
class node{
public:
	string key;
	T value;
	node<T> *next;

	node(string key,T v){
		this->key = key;
		value = v;
	}
	~node(){
		if(next!=NULL){
			delete next;
		}
	}
};

template<typename T>
class Hashtable{
    int cs; ///Current Size
    int ts; ///Max Arr Size
    node<T>** buckets;

    void rehash(){

    	node<T>** oldbuckets = buckets;
    	int oldTs = ts;
    	ts = ts*2;
    	cs = 0;
    	buckets = new node<T>*[ts];
    	for(int i=0;i<ts;i++){
    		buckets[i] = NULL;
    	}

        ///Read the elements from old table and insert them into new table
    	for(int i=0;i<oldTs;i++){
    		node<T>*temp = oldbuckets[i];

    		// Check if there is a oldbucket present or not
    		// When we delete the bucket then this will not run
    		if(temp!=NULL){
    		while(temp!=NULL){
    			insert(temp->key,temp->value);
    			temp  = temp->next;
    		}
            ///Delete the old table i bucket linked list
    		delete oldbuckets[i];
    	}
    }
    delete [] oldbuckets;
}

int hashFn(string key){
	int L = key.length();
	int ans =0 ;
        int p = 1; ///37^0 is 1 initially

        for(int i=0;i<L;i++){
        	ans += key[L-i-1]*p;
        	p = p*37;

        	p %= ts;
        	ans %= ts;
        }
        return ans;
    }

public:
	Hashtable(int ds=7){
		cs = 0;
		ts = ds;
		buckets = new node<T>*[ts];
        ///Make all addresses as NULL
		for(int i=0;i<ts;i++){
			buckets[i] = NULL;
		}
	}

	void insert(string key,T value){
        ///Key i need the hash-index
		int i = hashFn(key);

		node<T>*n = new node<T>(key,value);
		n->next = buckets[i];
		buckets[i] = n;

		cs++;

		float load_factor = (float)cs/ts;
			if(load_factor>.7){
				cout<<"Load factor is "<<load_factor<<endl;
				rehash();
			}

		}
    ///Print it
		void print(){
        ///Iterate over buckets array
			for(int i=0;i<ts;i++){
            ///Print the LL for each buckets
				node<T>*temp = buckets[i];
				cout<<"Bucket "<<i<<"->";
				while(temp!=NULL){
				cout<<temp->key<<",";
				temp = temp->next;
			}
			cout<<endl;
		}
	}

	T* search(string key){
		int i=hashFn(key);
		node<T>* temp=buckets[i];
		while(temp!=NULL)
		{
			if(temp->key==key)
		{
			return &(temp->value);
		}
		temp=temp->next;
	}
	return NULL;
}


T* erase(string key){
	int i = hashFn(key);
	node<T>* temp = buckets[i];
	node<T>* prev = temp;

	while(temp!=NULL){
		if(temp->key==key){
		if(temp->next!=NULL){
			prev->next = temp->next;
		}else{
			prev->next = NULL; 
		}
	}
	temp = temp->next;
	prev->next = temp;


}

}
};

int main(){

	Hashtable<int> h(7) ;
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
