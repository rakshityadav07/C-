#include <iostream>
#include <cstring>
using namespace std ;

char *mystrtok(char str[], char delim){

	static char *input = NULL;

	if(str != NULL){
		input = str ;
	}

	if (input == NULL){
		return NULL ;
	}

	char *output = new char[strlen(input) + 1] ;//+1 for the NULL or '\0' at the end
	//return a word as dyanamically word array from my function
	//read the word from the input and return 
	int i ;
	for (i = 0; input[i] != '\0' ; ++i){

		if(input[i]!=delim){
			output[i] = input[i];
		}else{
			//now you are at the deliminator
			output[i] = '\0';
			input = input + i + 1 ;
			return output ;
		}
	}
	//when string is completed then put the '\0' at the end in the output array
	//and input pointer points to the NULL
	//..and return the output 
	output[i] = '\0' ;
	input = NULL ;
	return output ;
}

int main(){

	char str[] = "Hello ,I am teaching about string ,in C++" ;

	char *ptr;
	ptr = mystrtok(str, ',') ;

	while(ptr != NULL){
		cout << ptr << endl ;
		ptr = mystrtok(NULL , ',') ;
	}

}