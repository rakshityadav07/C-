#include <iostream>
#include <cstring>

using namespace std ;

// void SpiralPrint(char a[][10] ,  int r ,int c){

// 	int startRow = 0 ;
// 	int endrow = r-1 ;
// 	int startcol = 0 ;
// 	int endcol = c-1 ;

// 	char k = 'X' ;

// 	while(startRow <= endrow && startcol <= endcol) {

// 	 	//for printing starting row
// 		for (int j = startcol; j <= endcol ; j++){
// 			a[startRow][j] == k ;
// 		}
// 		startRow++;

// 	 	//for printing last column
// 		for (int i = startRow; i <= endrow  ; i++){
// 			a[i][endcol] == k ;
// 		}
// 		endcol--;

// 	 	//for printing end row - Make sure it is printed if endrow < StartRow
// 		if(endrow > startRow){
// 			for (int j = endcol; j >= startcol ; j--){
// 				a[endrow][j] == k ; 
// 			}
// 			endrow--;
// 		}

// 	 	//for printing start column
// 		if(startcol < endcol){
// 			for (int i = endrow ; i >= startRow ; i--){
// 				a[i][startcol] == k ; 
// 			}
// 			startcol ++ ;
// 		}

// 		if(k == 'O'){
// 			k = 'X' ;
// 		}else{
// 			k = 'O' ;
// 		}
// 	}	

// 	for (int i = 0; i < r; ++i){
// 		for (int j = 0; j < c; ++j){
// 			cout << a[i][j] <<" " ;
// 		}
// 		cout << endl ;
// 	}
// 	cout <<endl;
// }


void SpiralPrint(int m, int n) 
{ 
    /*  k - starting row index 
        m - ending row index 
        l - starting column index 
        n - ending column index 
        i - iterator    */
	int i, k = 0, l = 0; 

    // Store given number of rows and columns for later use 
	int r = m, c = n; 

    // A 2D array to store the output to be printed 
	char a[m][n]; 
	char x = 'X'; 

	while (k < m && l < n) {


		for (i = l; i < n; ++i) 
			a[k][i] = x; 
		k++; 

        /* Fill the last column from the remaining columns */
		for (i = k; i < m; ++i) 
			a[i][n-1] = x; 
		n--; 

        /* Fill the last row from the remaining rows */
		if (k < m) 
		{ 
			for (i = n-1; i >= l; --i) 
				a[m-1][i] = x; 
			m--; 
		} 

        /* Print the first column from the remaining columns */
		if (l < n) 
		{ 
			for (i = m-1; i >= k; --i) 
				a[i][l] = x; 
			l++; 
		} 

        // Flip character for next iteration 
		x = (x == '0')? 'X': '0'; 
	} 

    // Print the filled matrix 
	for (i = 0; i < r; i++) { 
		for (int j = 0; j < c; j++) {
			cout << a[i][j] << " "  ; 
		}
		cout << endl ;
	} 

} 


int main(){

	int r,c ;
	char a[10][10] ;
	cin >> r >> c ;

	SpiralPrint(r,c);

}