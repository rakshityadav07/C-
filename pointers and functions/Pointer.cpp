#include <iostream>
using namespace std;
int main(){

int x=10;
int y=20;
cout<<&x<<endl;;

int  *xptr; 
//stores the address of a variable
xptr = &x;
cout<<xptr<<endl;

int *xptr2;
xptr2 = &y;

cout<< &y<< "  " << xptr2<<endl;


}