#include <iostream>
#include <cstring>
using namespace std;

class Car{
public:
    int price;
    int model_no;
    char name[20];

    Car(){
        cout << "Making the car...." << endl;
    }

    Car(int p,int mn,char *n){
        price = p;
        model_no = mn;
        strcpy(name,n);
    }

    void start(){
        cout<<"Grrrr...starting the car "<<name<<endl;
    }

    void setPrice(int p){
        if(p>1000){
            price  = p;
        }
        else{
            price = 1000;
        }
    }
    int getPrice(){
        return price;
    }

    void print(){
        cout << price << endl;
        cout << model_no << endl;
        cout << name << endl;
        cout << endl;
    }

};

int main() {

    Car C;
    //Initialisation
    //C.price =-500;
    C.setPrice(1500);
    C.model_no = 1001;
    C.name[0] = 'B';
    C.name[1] = 'M';
    C.name[2] = 'W';
    C.name[3] = '\0';
    C.start();

   // cout<<C.price<<endl;
    cout<<C.name<<endl;
    cout<<C.getPrice()<<endl;

    Car D;
    D.setPrice(2000);
    cout<<D.getPrice()<<endl;

    Car E(1203,120," Ferrari ");
    E.print();

    return 0;

}

