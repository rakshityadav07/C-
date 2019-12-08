#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;

// int fastPower(int a,int b){

// if(b==0){
// 	return 1;
// }

// int ans = a*fastPower(a,b-1);
// return ans;

// }

//optimsized approach;
int fastPower(int a,int b){

	if(b==0){
		return 1;
	}

	int smallAns = fastPower(a,b/2);
	smallAns *= smallAns;

	if(b&1){
		return a*smallAns;
	}
	else{
		return smallAns ;
	}

}

int main(){

	int a,b;
	cin >> a >> b;

	int ans = fastPower(a,b);

	cout << ans ;

}