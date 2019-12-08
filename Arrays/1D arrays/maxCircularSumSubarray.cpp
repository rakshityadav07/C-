/*

Code runs on the coding blocks ide;

*/
#include<iostream>
using namespace std;

int kadane(int a[] ,int n);

int kadane(int a[] ,int n){
	int cs=0;
	int maxSum=0;

	//Kadane's algorithm
	for (int i = 0; i < n; ++i)	{
		cs = cs + a[i];
		if(cs<0){
			cs = 0 ;
		}
		maxSum = max(maxSum ,cs);
	}
	return maxSum ;
}

int maxCirSum(int a[] ,int n){
	int cs = 0 ;
//case 1 for the simple kadens algorithm to find the max sub array sum 
	int maxKadane = kadane(a,n);

//case 2 for the corner elements
	for(int i =0 ; i<n ; i++){
		cs = cs + a[i];
		a[i] = -a[i];
	}
	//here we subtract the cumSum of the inverted(sign) array
	//from the original array
	cs = cs + kadane(a,n);

	// return (cs > maxKadane)? cs: maxKadane;
	if(cs > maxKadane){
		return cs;
	}else{
		return maxKadane;
	}
}


int main(){
	int t;
	cin >> t ;

	while(t--) {
		int n;
		int a[n];
		cin >> n;

		for(int i=0 ; i<n ;i++){
			cin >> a[i] ;
		}

		cout << maxCirSum(a,n) << endl ;

	}

}




// // C/C++ program for maximum contiguous circular sum problem
// #include<stdio.h>
// using namespace std;
// // Standard Kadane's algorithm to find maximum subarray
// // sum
// int kadane(int a[], int n);
// // The function returns maximum circular contiguous sum
// // in a[]
// int maxCircularSum(int a[], int n){
// // Case 1: get the maximum sum using standard kadane's algorithm
// 	int max_kadane = kadane(a, n);
// // Case 2: Now find the maximum sum that includes corner elements.
// 	int max_wrap = 0, i;
// 	for (i=0; i<n; i++){
// 		max_wrap += a[i]; // Calculate array-sum
// 		a[i] = -a[i]; // invert the array (change sign)
// 	}
// // max sum with corner elements will be:
// // array-sum - (-max subarray sum of inverted array)
// 	max_wrap = max_wrap + kadane(a, n);
// // The maximum circular sum will be maximum of two sums
// 	return (max_wrap > max_kadane)? max_wrap: max_kadane;
// }
// // Standard Kadane's algorithm to find maximum subarray sum
// // See https://www.geeksforgeeks.org/archives/576 for details
// int kadane(int a[], int n){
// 	int max_so_far = 0, max_ending_here = 0;
// 	int i;
// 	for (i = 0; i < n; i++){

// 		max_ending_here = max_ending_here + a[i];
// 		if (max_ending_here < 0)
// 			max_ending_here = 0;
// 		// if (max_so_far < max_ending_here)
// 		// 	max_so_far = max_ending_here;
// 		max_so_far = max(max_ending_here , max_so_far);
// 	}
// 	return max_so_far;
// }
// /* Driver program to test maxCircularSum() */
// int main(){
// //int a[] = {10, -3, -4, 7, 6, 5, -4, -1};
// //int n = sizeof(a)/sizeof(a[0]);
// 	int t;
// 	// scanf("%d", &t);
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 		int n;
// // scanf("%d", &n);
// 		cin>>n;
// 		int a[n];
// 		for(int j=0;j<n;j++){
// // scanf("%d", &a[j]);
// 			cin>>a[j];
// 		}
// // printf("%d \n",maxCircularSum(a, n));
// 		cout << maxCircularSum(a,n) ;
// 	}
// 	return 0;
// }