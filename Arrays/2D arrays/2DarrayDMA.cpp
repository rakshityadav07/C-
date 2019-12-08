// #include <iostream>
// using namespace std ;

// int main(){

// 	//Here we make 2d array using DMA
// 	int **arr = new int *[3];//creates the primary array in the heap area;
// 	for (int i = 0; i < 3; ++i){
// 		//iterate over primary array and at each index we will -
// 		// - allocate new secondary array of no. of columns we need to allocate
// 		arr[i] = new int[4] ;
// 	}
// 	/*
// 	Here we take the input
// 	in the array
// 	*/
// 	int counter =0 ;
// 	for (int i = 0; i < 3; ++i){
// 		for (int j = 0; j < 4; ++j){
// 			arr[i][j] = counter ;
// 			counter++ ;
// 		}
// 	}

// 	for (int i = 0; i < 3; ++i){
// 		for (int j = 0; j < 4; ++j){
// 			cout << arr[i][j]<< " " ;
// 		}
// 		cout << endl ;
// 	}

// 	/*
// 	Here we delete the memory 
// 	alocated to the 2d array
// 	*/

// 	for (int i = 0; i < 3; ++i){
// 		//Here first we disallocate the primary array
// 		delete [] arr [i];
// 	}
// 	delete [] arr ;

// 	cout << "Helo " ;
// }

