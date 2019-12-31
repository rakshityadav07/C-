#include <iostream>
using namespace std;

void permutation(char *in,int i){

	//base case;
	if(in[i]=='\0'){
		cout <<in<< ",";
		return;
	}

	//Recursive case;
	for (int j = i; in[j]!='\0'; ++j){
		swap(in[i],in[j]);
		//call before function hame niche le jatti hai
		permutation(in,i+1);
		//call after function hame uper le jatti hai 
		//due to change in the original array
		//This step is backtracking - to restore the original array
		swap(in[i],in[j]);
	}

}

int main(){

	char in[100];
	cin >> in;

	int i = 0 ;

	permutation(in,i);

	return 0;
}
