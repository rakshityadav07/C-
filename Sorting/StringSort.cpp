#include <iostream>
#include <algorithm>
using namespace std;

// bool isSubstring(string s1, string s2) 
// { 
// 	int M = s1.length(); 
// 	int N = s2.length(); 

//     /* A loop to slide pat[] one by one */
// 	for (int i = 0; i <= N - M; i++) { 
// 		int j; 

//         /* For current index i, check for pattern match */
// 		for (j = 0; j < M; j++) 
// 			if (s2[i + j] != s1[j]) 
// 				break; 

// 			if (j == M) 
// 				return true; 
// 		} 

// 		return false; 
// 	} 


// 	int main(){

// 		string s[100];

// 		int n;
// 		cin >> n ;

// 		for (int i = 0; i < n; ++i){
// 			cin >> s[i];
// 		}

// 		sort(s,s+n);
// 	// length(s,n);

// 		int j=0;
// 		while(j<n){
// 			if(s[j].length()<s[j+1].length() && isSubstring(s[j], s[j+1])){
// 				swap(s[j], s[j+1]);
// 			}
// 			else{
// 				j++;
// 			}
// 		}

// 		for (int i = 0; i < n; ++i){
// 			cout << s[i] << endl; 
// 		}

// 	}


int compareTo(string s1, string s2) {

	int i = 0;      

	while (i < s1.length() && i < s2.length()) {

		if (s1[i] > s2[i]) {
			return 1;
		} else if (s1[i] < s2[i]) {
			return -1;
		}
		i++;
	}

	if (s1.length() > s2.length()) {
		return -1;
	} else {
		return 1;
	}

}
// 1 2 3 4
// i=0 j=0 j=1n

void sortfunc(string arr[], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			// cout << i << " " << j << " " << j+1 << " " << endl ;
			if (compareTo(arr[j], arr[j + 1]) > 0) {
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main() {

	int n;
	cin>>n;
	
	string* str = new string[n];
	
	cin.ignore();
	
	for(int i=0;i<n;i++){   
		cin>>str[i];
	}

	sortfunc(str, n);
	
	for(int i=0;i<n;i++){
		cout<<str[i]<<endl;
	}

}

