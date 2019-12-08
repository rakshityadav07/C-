#include <iostream>
using namespace std;


// /*This is the first method but here we are using the for loop*/
// void bubbleSort(int a[],int n){

// 	if(n==1){
// 		return ;
// 	}

// 	for (int i = 0; i < n-1; ++i)
// 	{
// 		if(a[j]>a[j+1]){
// 			swap(a[j],a[j+1]);
// 		}
// 		/* code */
// 	}
// 	bubbleSort(a,n-1);
// }

/*This is the second method with changing the for loop into the recursive call*/
void bubbleSort(int a[],int j,int n){

	if(n==1){
		return ;
	}

	if(j==n-1){
		return bubbleSort(a,0,n-1); 
	}

	if(a[j]>a[j+1]){
		swap(a[j],a[j+1]);
	}

	// eg if we have an array 5 3 8 1 7;
	// So here we have j=0 index and it will compare with the 3; 
	// and swap and now j should be at j==1;
	// So in next step in bubbleSort we increase j by 1;
	//and when j will hit the last swap and comes to the last index
	//it will go in if condition of (j==n-1);

	bubbleSort(a,j+1,n);

}


int main(){

	int n;
	cin >> n;

	int a[100];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i] ;
		/* code */
	}

	int j;

	bubbleSort(a,j,n) ;

	for (int i = 0; i < n; ++i)
	{
		cout << a[j] << " " ;
		/* code */
	}

}