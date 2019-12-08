#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool is_valid(bool *visited,int l,int r){

	for (int i = l; i < r; ++i){

		if(visited[i]){	
			return false;
		}
	}
	return true ;
}


long string_to_int(string a){

	long i,j=0;
	i=0;

	while(a[j] >= '0' && a[j] <= '9'){

		i = i*10 + (a[j]-'0');
		j++;
	}
	return i ;
}


bool isCBno(string a){

	long long num = string_to_int(a);

	//0 and 1 are not cb no.
	if(num == 0 || num == 1){
		return false;
	}
	int arr[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };

	sizeof(arr)/sizeof(arr[0]) ;

	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		if(num == arr[i]){
			return true ;
		}
	}

	//Any no not divisible by above number in array are also coding blocks number
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i){
		if(num % arr[i] == 0){
			return false;
		}
	}
	return true;
}

int main(){

	int n;
	cin >> n;

	string s;
	cin >> s;

	long count = 0;

	bool* visited = new bool[n];

	int length = s.length() ;

	for (int i = 1; i <= length; ++i){
		for (int j = 0; j <= length-i; ++j){
			
			// cout << i << "and" << j << endl ;

			int k = j+i ;

			// cout << k << endl ;

			//substr is for the substring starting from j ans size is the next paramter which is k-j;
			string a = a.substr(j,k-j);

			// cout << a << " " ;
 			//Two conditions needs to be checked 
			//1.is this a CB bo;
			//2.if its value is not been repeated means it is not a super-substring of substring
			if(isCBno(a) && is_valid(visited,j,k)){

				//Here we increase the count for every new CB value 
				count ++;

				//Here we store the value which are true so when again the 
				//loop runs then in is_valid function do not return true for all the Cb no 
				//as we need only those which are not super-substring of the substring 
				for (int l = j; l < k; ++l){
					visited[l] = true ;
				}

			}

		}		
	}

	cout << count << endl ;
	return 0;
}












// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// long stoint(string s){

// 	long i,j=0;
// 	i = 0;

// 	while(s[j] >= '0' && s[j] <= '9'){
// 		i = i * 10 + (s[j] - '0');
// 		j++;
// 	}
// 	return i;
// }

// bool is_cb_number(string s){

// 	long long num = stoint(s);

// 	if (num == 0 || num == 1) {
// 		return false;
// 	}

// 	int arr[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };

// 	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
// 		if (num == arr[i]) {
// 			return true;
// 		}
// 	}

// 	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
// 		if (num % arr[i] == 0) {
// 			return false;
// 		}
// 	}

// 	return true;
// }

// bool is_valid(bool * visited, int l, int r){
// 	for(int i=l;i<r;i++){
// 		if(visited[i]){
// 			return false;
// 		}
// 	}
// 	return true;
// }

// int main()
// {
// 	int n;
// 	cin>>n;

// 	string s;
// 	cin>>s;

// 	long count = 0;

// 	bool* visited = new bool[n];

// 	for(int i=1; i <= s.length(); i++)
// 	{
// 		for(int j=0; j<=s.length()-i; j++){   
// 			int e = j+i;

// 			string sub = s.substr(j, e-j);

// 			if(is_cb_number(sub) && is_valid(visited,j,e)){
// 				count++;
// 				for(int k=j;k<e;k++){
// 					visited[k]=true;
// 				}
// 			}
// 		}
// 	}

// 	cout<<count<<endl;
// 	return 0;
// }