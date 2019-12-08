// #include <iostream>
// #include <algorithm>
// #define n 10
// using namespace std;

// int main(){

// 	int a[1000];

// 	int left[n] ={0};
// 	int right[n] = {0} ;

// 	for (int i = 0; i < n; ++i){
// 		cin >> a[i] ;
// 	}

// 	//for right side
// 	int maxR ;
// 	int curBuilding = 0;
// 	for (int i = curBuilding; i < n; ++i){
// 		maxR = a[i];
// 		for (int j = i; j < n; ++j){
// 			maxR = max(maxR,a[j]);
// 		}
// 		right[i] = maxR;
// 		curBuilding++;
// 	}
// 	 //For Left Side find the max element 
// 	int maxL = 0;
// 	curBuilding=n;
// 	for(int i=curBuilding;i>=0;i--){
// 		maxL = a[i];
// 		for(int j=i-1;j>=0;j--){
// 			maxL = max(maxL,a[j]);
// 		}
// 		left[i] = maxL;
// 		curBuilding--;
// 	}

// 	int sum = 0;
// 	for (int i = 0; i < n; ++i){
// 		sum = sum + min(right[i],left[i]) - (a[i]);
// 	}

// 	cout << sum ;

// }





/*Another Method to solve the question*/

// An element of an array can store water if there are higher bars on left and right. We can find the amount of water to be stored in every element by finding the heights of bars on the left and right sides. The idea is to compute the amount of water that can be stored in every element of the array. For example, consider the array {3, 0, 0, 2, 0, 4}, we can store two units of water at indexes 1 and 2, and one unit of water at index 2.

// A Simple Solution is to traverse every array element and find the highest bars on left and right sides. Take the smaller of two heights. The difference between smaller height and height of the current element is the amount of water that can be stored in this array element. The time complexity of this solution is O(n2).

// An Efficient Solution is to the pre-compute highest bar on left and right of every bar in O(n) time. Then use these pre-computed values to find the amount of water in every array element.

#include <iostream>
#include <algorithm>
#define n 10
using namespace std;
int main(){


	int arr[1000] ;

	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}

    int water = 0;  // To store the final ans

    int left_max = 0;     //Which stores the current max height of the left side
    int right_max = 0;   //Which stores the current max height of the right side

    int lo = 0;                //Counter to traverse from the left_side
    int hi = n - 1;           //Counter to traverse from the right_side

    while(lo <= hi){

    	if(arr[lo] < arr[hi]){         

    		if(arr[lo] > left_max){
          left_max = arr[lo];             //Updating left_max
      }else{ 

          water += left_max - arr[lo];  //Calculating the ans
      }
      lo++;
  }else{

  	if(arr[hi] > right_max){
          right_max = arr[hi];               //Updating right_max
      }else{
          water += right_max - arr[hi];  //Calculating the ans
      }
      hi--;
  }

}

cout << water << endl;

}