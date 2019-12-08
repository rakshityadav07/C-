#include <iostream>
using namespace std;

void generateSquare(int n) {  
	int magicSquare[n][n];  

	memset(magicSquare, 0, sizeof(magicSquare));  

	int i = n/2;  
	int j = n-1;  

	int num = 1; 

	while (num <= n*n){  
		if (i == -1 && j == n) {  
			j = n-2;  
			i = 0;  
		}  
		else{   
			if (j == n)  
				j = 0;  

			if (i < 0)  
				i = n - 1;  
		}  
		if (magicSquare[i][j]) 
		{  
			j -= 2;  
			i++;  
			continue;  
		}  
		else
			magicSquare[i][j] = num++; 
		j++;
		i--; 
	}

	for (i = 0; i < n; i++){  
		for (j = 0; j < n; j++)  
			cout<<magicSquare[i][j]<<" ";  
		cout<<endl; 
	}  

}


int main(){

	int n;
	cin >> n ;

	int a[n][n] ;

	generateSquare(n);

}