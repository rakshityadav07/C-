#include<iostream>
using namespace std;
int main() {
    char b;
    cin>>b;
    if(b>='a' && b<='z'){
        cout<<"lowercase";
    }else if(b>='A' && b<='Z'){
        cout<<"UPPERCASE";
    }else{
        cout<<"Invalid";
    }
}  