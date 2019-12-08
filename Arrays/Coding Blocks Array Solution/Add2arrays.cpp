#include <iostream>
#include <cmath>
using namespace std;
int main(){

	int n;
	cin >> n ;

	int a[n];
	for (int i = 0; i < n; ++i){
		cin >> a[i] ;
	}
	int m;
	cin >> m ;
	int b[m];
	for (int i = 0; i < m; ++i){
		cin >> b[i] ;
	}

	//Adding both the arrays
	//if input is  1 2 3 4 it will convert in 1234 and same as of other array 
	//and it will add the arrays
	int count = 0 ;

	int ASum = 0 ;
	for(int i=n-1;i>=0;i--){
		ASum += a[i]*pow(10,count++);
	}
	int Bsum =0 ;
	for(int i=m-1;i>=0;i--){
		Bsum += b[i]*pow(10,count++);
	}
	int sum = ASum + Bsum ;
	
	//For saving the value in the array and printing the value in reverse order 
	//as is being saved in reverse order
	int temp[100];
	int j =0 ;
	while(sum){
		temp[j]=sum%10;
		sum = sum/10;
		j++;
	}
	for(int k=j-1;k>=0;k--){
		cout<<temp[k]<<", ";
	}
	cout<<"END";


}