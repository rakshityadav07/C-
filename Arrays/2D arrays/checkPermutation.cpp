#include <iostream>
using namespace std;

bool isPermutation(char *s1,char *s2){

	int l1 = strlen(s1);
	int l2 = strlen(s2);

	if(l1 != l2){
		return false ;
	}

	int freq[26] = {0} ;

	for (int i = 0; i<l1 ; ++i){
		freq[s1[i]-'a']++;	
	}

	for (int i = 0; i<l2 ; ++i){
		freq[s2[i]-'a']--;	
	}

	for (int i = 0; i < 26; ++i){
		if(freq[i] != 0){
			return false ;
		}
	}

	return true ;

}

int main(){
	
	char s1[100],s2[100] ;
	cin >> s1 >> s2 ;

	if(isPermutation(s1,s2)){
		cout << "Is Permutation" << endl ;
	}else{
		cout << "Is not a Permutation" << endl ;
	}

}

