// Ouestion to add complex no.
// Here we also learn about istream and ostream inbuild datadype
//

#include <iostream>
using namespace std;

class Complex{
	int real;
	int imag;
public:
	Complex(){
		real = 0;
		imag = 0;
	}
	//Parameterized constructor
	Complex(int r,int i){
		real = r;
		imag = i;
	}

	void setReal(const int r){
		real = r;
	}
	void setImag(const int i){
		imag = i;
	}

	int getReal() const{
		return real ;
	}
	int getImag(int i) const{
		return imag ;
	}

	void print(){
		if(imag>0){
			cout<<real<<" + "<<imag<<"i"<<endl;
		}else{
			cout<<real<<" - "<<-imag<<"i"<<endl;
		}
	}

	void add(const Complex &x){
		real += x.real;
		imag += x.imag;
	}

	//operatorOverloading
	void operator+(const Complex &x){
		real += x.real;
		imag += x.imag;
	}

	void operator!(){
		imag *= -1;
	}

	void operator[](string s){
		if(imag>0){
			cout<<real<<" + "<<imag<<"i"<<endl;
		}else{
			cout<<real<<" - "<<-imag<<"i"<<endl;
		}	
	}
};


istream& operator>>(istream& is ,Complex &C){
	int r1,i2;
		is>>r1>>i2; //here we can also use cin	
		C.setReal(r1);
		C.setImag(i2);
		return is;
	}

	ostream& operator<<(ostream& os ,Complex &c){
		c.print();
		return os;
	}


	int main(int argc, char const *argv[]){

		Complex C1(5,4);
		Complex C2;
		C2.setImag(4);
		C2.setReal(1);

		C1.print();
		C2.print();

	// C1.add(C2);
		// C1+C2;
		// C1.print();

		// !C1;
		// C1.print();

		// C1["is cool"];

		cout << endl ;
		//for each one it takes two value one imaginary and one real and we print that 
		//for that we had made the istream and ostream 
		Complex d1,d2;
		cin >> d1 >> d2;
		cout << d1 << d2 ; 

		return 0;
	}