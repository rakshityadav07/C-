#include <iostream>
using namespace std;

class Car{
public:

	int price;
	int model_no;
	char name[20];

	void start(){
		cout << "Starting the car " << name << endl ;
	}

};

int main(){

	Car C;

	C.price = 500;
	C.model_no = 1001;
	C.name[0] = 'B';
	C.name[1] = 'M';
	C.name[2] = 'W';
	C.name[3] = '\0';
	C.start();
	// cout << sizeof(C) << endl; //This takes 28 bytes;
	// cout << sizeof(Car) << endl;//This will take 28 bytes if we create a new Car object;
	// // Car C[100]; //This will create an array of Objects;
	

	return 0;

}