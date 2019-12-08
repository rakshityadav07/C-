#include <iostream>
using namespace std;

int factorial(int num){
	int ans =1 ;
	for (int i = 1; i <= num; ++i){
		ans = ans * i;
	}
	return ans ;
}

int main(){

	int n,r;
	cin>>n>>r;

	int nfact = factorial(n);
	int rfact = factorial(r);
	int nrfact = factorial(n-r);

	int ans = nfact / (rfact*nrfact);

	cout << ans << endl ; 


	// int nfact=1;
	// int rfact=1;
	// int n, r;
	// cin>> n >> r ;
	
	// //nfact
	// for(int curNum =1 ; curNum <=n ; ++curNum){
	// 	nfact = nfact * curNum;
	// }
	// //rfact
	// for (int curNum = 1; curNum <= r; ++curNum){
	// 	rfact = rfact * curNum;
	// }
	// //(n-r)fact
	// int nrfact =1;
	// for (int curNum = 1; curNum <= (n-r); curNum++)	{ 
	// 	nrfact = nrfact*curNum;
	// }

	// int ans = (nfact)/(rfact * nrfact);
	// cout << ans <<endl;


}