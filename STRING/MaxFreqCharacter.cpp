#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


void MaxFreqChar(char ch[]){

	int len = strlen(ch);
	int freq[26] = {0};

	//to store the max occuring character
	char result;

	int max = -1;

	for (int i = 0; i < len; ++i){
		freq[ch[i]-'a']++;
	}

	for (int i = 0; i < 26; ++i){
		if(freq[i] > max){
			max = freq[i];
			result = i + 'a' ;
		}
	}	
	cout << result ;
}


int main(){

	char ch[100] ;
	cin.getline(ch,100);


	MaxFreqChar(ch);
}