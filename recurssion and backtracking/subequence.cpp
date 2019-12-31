#include <iostream>
using namespace std;

void subsequence(char *in,char *out,int i,int j){

	//Base Case
	if(in[i]=='\0'){
		out[j]='\0';
		cout << out << ",";
		return;
	}

	//Recursive case
	//1.If we include the char element in the array;
	out[j]=in[i];
	subsequence(in,out,i+1,j+1);
	//2.If we ignore the chararcter element 
	subsequence(in,out,i+1,j);

}

int main()
{
	char in[100];
	cin >> in ;

	char out[100];
	int i,j=0;
	subsequence(in,out,i,j);
	return 0;
}