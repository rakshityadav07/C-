#include <iostream>
using namespace std;

class Car{
public: //Access modifier
int price;
int model_no;
char name[20];

};

int main(){

	Car C;
	cout << sizeof(C) << endl; //This takes 28 bytes;
	cout << sizeof(Car) << endl;//This will take 28 bytes if we create a new Car object;
	
	// Car C[100]; //This will create an array of Objects;

	return 0;
}