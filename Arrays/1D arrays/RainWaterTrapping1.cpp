// #include<iostream>
// using namespace std;
// #define n 50 
// int main() {

// 	int arr[1000000];
// 	// long long int n;

// 	// cin>>n;
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}

// 	int Right[n] = {0};
// 	int Left[n] = {0};

// 	int cur=0;
// 	int maxR=0;
// 	for(int i=cur;i<n;i++){
// 		maxR = arr[i];
// 		for(int j=i;j<n;j++){
// 			if(maxR<arr[j]){
// 				maxR = arr[j];
// 			}
// 		}
// 		Right[i] = maxR;
// 		cur++;
// 	}

//     //For Left Side find the max element 
// 	int maxL;
// 	cur=n;
// 	for(int i=cur;i>=0;i--){
// 		maxL = arr[i];
// 		for(int j=i-1;j>=0;j--){
// 			if(maxL<arr[j]){
// 				maxL = arr[j];
// 			}
// 		}
// 		Left[i] = maxL;
// 		cur--;
// 	}

// 	int sum=0;
// 	for(int i=0;i<n;i++){
// 		sum = sum + min(Right[i],Left[i]) - (arr[i]);
// 	}
// 	cout<<sum<<endl;
// }
















#include <iostream>
using namespace std;
int main(){

	int arr[10000];
	long long int n;
	cin >> n ;

	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	int left[n] ={0};
	int right[n] ={0};

	//for the right largest building

	int curB = 0 ;	
	int maxRight;

	for (int i=curB;i<n;++i){
		maxRight = arr[i];
		for (int j=i;j<n;++j){
			maxRight = max(maxRight,arr[j]) ;
		}			
		right[i] = maxRight ;
		curB ++ ;
	}
	//for left largest building 
	int maxxLeft = 0;
	curB = n ;
	for (int i=curB ; i>=0 ; i--){
		maxxLeft = arr[i];
		for (int j=i-1; j>=0; --j){
			maxxLeft = max(maxxLeft , arr[j]);
		}
		left[i] = maxxLeft;
		curB--;
	}

	int sum = 0 ;
	for (int i = 0; i < n; ++i){
		sum = sum + min(left[i] , right[i]) - (arr[i]) ;
	}

	cout << sum << endl ;


}




