#include <iostream>
using namespace std;

//first we see 
//Pass by value
void increment(int a){
	a = a + 1;
	cout <<"inside function : "<< a <<endl;
}

//Now by
//Pass by reference
void increment(int *aptr){
	*aptr = *aptr + 1 ;
	cout << "Inside incerment function: " << *aptr << endl ;
} 

int main(){

	int a =10 ;
	increment(&a);
	cout<<"inside main : "<< a << endl ;

}
