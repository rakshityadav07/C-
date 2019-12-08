#include <iostream>
#include <cstring>

using namespace std;

void filterSequence(char *a,int no){

	int i = 0;
	while(no > 0){
		(no&1)?cout<<a[i]:cout<<"";
		i++;
		no = no>>1;
	}
	cout << endl ;
}

void generateSubseq(char *a){

	int n = strlen(a);
	//..a<<n = a*2^n;
	int range = (1<<n)-1;

	for (int i = 0; i<=range; ++i){
		filterSequence(a,i);
	}

}

int main(){

	char a[100];
	cin >> a;

	generateSubseq(a); 

}