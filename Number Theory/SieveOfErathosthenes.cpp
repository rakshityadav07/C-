#include <iostream>
using namespace std;

void primes(int p[],int n){

	p[0]=p[1]= 0;
	p[2]= 1; 

	// non-prime 0;
	// prime 1;
	for (int i = 3; i <= n; i+=2){
		p[i] = 1;
	}

	//optimization of sieve of erathosthenes
	//1.iterate only on odd n
	for (int i = 3; i <= n; i+=2){
		if(p[i]){
			for (int j = i*i; j <= n; j+=2*i){
				p[j] = 0;
			}
		}
	}


}


int main(){

	// int n;
	// cin >> n;

	// int p[100] = {1};

	// p[1] = 1;
	// p[0] = 0;

	// //assume all are primes
	// for (int i = 2; i <= n; ++i){
	// 	p[i] = 1;
	// }

	// for (int i = 2; i <= n; ++i){
	// 	if(p[i]==1){
	// 		for (int j = 2*i; j <= n; j+=i){
	// 			p[j] = 0;
	// 		}
	// 	}
	// }

	// for (int i = 2; i < n; ++i){
	// 	if(p[i]==1){
	// 		cout << i << " " << p[i]  ;
	// 	}
	// // }


	int n;
	cin >> n ;

	int p[n];
	p[n] = {0};

	primes(p,n);

	for (int i = 0; i < n; ++i){
		if(p[i]){
			cout << i << endl ;
		}
	}

}