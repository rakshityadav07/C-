#include <iostream>
using namespace std;

int main(){

	string s;
	cin>>s;
	
	int n=s.length();
	string pr;
	
	for(int i=0;i<n;i++){

		pr.push_back(s[i]);
		// cout << pr <<" dw" <<  endl ;

        if(i==n-1){ //last letter
        	// cout << i << " " << n-1 <<endl ;
        	cout<<pr<<endl;
        }else if(s[i+1]>='A' && s[i+1]<='Z') { //s[i+1] is a capital letter.
        	cout<<pr<<endl;
        	pr.clear();
        }
    }
    return 0;
}