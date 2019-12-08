#include <iostream>
using namespace std;

//Pass by reference variable using reference variable
void update(int &z){
	z++;
}

int main(){

	int x = 10;
	//Declaring and initializing the reference variable
	//we must initailize the reference variable 
	int &y = x;
	y = y + 1;
	cout<<x<<endl;
	cout<<y<<endl;
	
	update(x);
	update(y);
	cout<<x<<endl;
	cout<<y<<endl;

}