/*STl- standrad template library
	s- same for all
	t-templated (generic datatype)
	l-library(bunch of functions and classes)

	Data(in/out)-->algortiths---store-->Data Structures(in stl it is "Containers")
	stl eg - templates,pairs,vector,stack,queue,stack,map,unordered-map,priority queue */

/*All about vector*/

#include <iostream>
#include <ostream>
#include <cstring>
using namespace std;

class Vector{
	int *arr;
	int cs;
	int maxSize;

public:
	//Constructor
	Vector(int defaultSize = 4){
		maxSize = defaultSize; 
		cs = 0;
		arr = new int[maxSize]; 
	}

	void push_back(int data){
		if(cs==maxSize){
			int *oldArr = arr;
			// new array is of the twice the size of the current array
			arr = new int[2*maxSize];
			// We make the maxsize twice 
			maxSize*=2;

			//We copy all the elements from the old Array to the new array 
			for (int i = 0; i < cs; ++i){
				arr[i] = oldArr[i];
			}
			delete [] oldArr;
		}
		arr[cs] = data;
		cs++;
	}

	int getSize(){
		return cs;
	}

	int getMaxSize(){
		return maxSize;
	}

	bool empty(){
		return cs==0 ;
	}

	void pop_back(){
		if(!empty()){
			cs-- ;
		}
	}

	void print(){
		for (int i = 0; i < cs; ++i){
			cout << arr[i] << "," ;
		}
	}

	int at(int i){
		return arr[i];
	}

	void operator()(string s){
		cout << s << " is an awesome place" << endl ;
	}

	int& operator[](int i){
		return arr[i];
	}

};

ostream& operator << (ostream &os, Vector v){
	cout<<"In << operator"<<endl;
	v.print();
	return os;
}

istream& operator >> (istream& is,Vector &v){
//here we can also pass the object by value 

	//Here write the input function;

}


int main() {
	Vector v(1000);
    //Operator () Call
    //v("Dehradun");

    Vector fun; //Default Copy Constructors - Shallow Copy
    //Looking like like a function, but it is an object [Functor : Functional Objects]
    //fun("Nainital");

    for(int i=0;i<=3;i++){
    	v.push_back(i*i);
    }

    fun = v; // Copy Assignment Operators -> Shallow Copy 

    cout<<v.getMaxSize()<<endl;
    v.push_back(7);
    cout<<v.getMaxSize()<<endl;
    v.print();

    //For Loop 
    for(int i=0;i<v.getSize();i++){
      //  cout<<v[i]<<endl;
    }

    cout<<endl;
    cout<<v<<fun;

    cout << endl ;

    v[2]=8;
    v[2]*=2;

    cout<<v[2]<<endl;

    return 0;
}


