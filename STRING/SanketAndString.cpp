#include <iostream> 
#include <cstring>
#include <algorithm>
using namespace std; 

// function to find the maximum length of  
// substring having character ch 
int findLen(string& A, int n, int k, char ch) 
{ 
	int maxlen = 1; 
	int cnt = 0; 
	int l = 0, r = 0; 

    // traverse the whole string 
	while (r < n) { 

        /* if character is not same as ch 
           increase count */
		if (A[r] != ch) 
			++cnt; 

        /* While  count > k  traverse the string 
           again until count becomes less than k  
           and decrease the count when characters  
           are not same */
		while (cnt > k) { 
			if (A[l] != ch) 
				--cnt; 
			++l; 
		} 

        /* length of substring will be rightIndex - 
           leftIndex + 1. Compare this with the maximum 
           length and return maximum length */
		maxlen = max(maxlen, r - l + 1); 
		++r; 
	} 
	return maxlen; 
} 

// function which returns maximum length of substring 
int answer(string& A, int n, int k) 
{ 
	int maxlen = 1; 
	for (int i = 0; i < 26; ++i) { 
		maxlen = max(maxlen, findLen(A, n, k, i+'A')); 
		maxlen = max(maxlen, findLen(A, n, k, i+'a')); 
	} 
	return maxlen; 
} 

// int answer(string s,int n,int k){

// 	int count1 = 0;
// 	int count2 = 0;	

// 	for(int i = 0; i < n; ++i){

// 		if(s[i] == 'a'){
// 			count1++;
// 		}

// 		if(s[i] == 'b'){
// 			count2++;
// 		}

// 	}

// 	int count  = max(count1,count2);
// 	return count+k ;

// }


// int main(){

// 	int k;
// 	cin >> k ;

// 	string s;
// 	cin >> s;

// 	int n = s.length();

// 	cout << answer(s,n,k);
// }