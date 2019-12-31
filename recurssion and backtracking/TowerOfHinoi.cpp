#include <iostream>
using namespace std;

void TowerOfHinoi(int n,char src,char dest,char helper){

	//base Case
	if(n==0){
		return ;
	}

	//Recursive Case
	//1st cae Where we shift n-1 disk from src to helper using destination
	TowerOfHinoi(n-1,src,helper,dest);

	//2nd step 
	//We shift last src disk to destination
	cout << "Move " << n << " disk from " << src << " to " << dest << endl ;

	//3rd step 
	//We shift the n-1 disk above the last disk at destination
	TowerOfHinoi(n-1,helper,dest,src);

}


int main(){

	int n;
	cin >> n ;

	TowerOfHinoi(n,'A','C','B') ;

	return 0;

}