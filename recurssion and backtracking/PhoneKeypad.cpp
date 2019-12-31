#include <iostream>
using namespace std;

char keyPad[][10]={"\0","\0","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","XYZ"};

void printKeypadString(char *in,char *out,int i,int j){

	//Base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout << out << " " ;
		return;
	}

	//Recursive case;
	int digit = in[i]-'0';
	// skip if 1 and 0 as inputs 
	if(digit==1 || digit==0){
		printKeypadString(in,out,i+1,j);
	}

	// Other inputs other than 0 and 1
	for(int k=0;keyPad[digit][k]!='\0';k++){
		out[j]=keyPad[digit][k];
		printKeypadString(in,out,i+1,j+1);
	}

}

int main(int argc, char const *argv[])
{
	char in[100];
	cin >> in ;

	char out[100];

	int i,j=0;
	printKeypadString(in,out,i,j);

	return 0;
}