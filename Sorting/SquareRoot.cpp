/*we find the square root of number 'n' with 'p' precision*/
#include <iostream>
#include <algorithm>

using namespace std;

float squareRoot(int no,int p){

	int s=0,e=no;
	int mid;
	float ans;

	while(s<=e){

		mid = (s+e)/2;

		if(mid*mid==no){
			ans = mid;
			break;
		}
		if(mid*mid<no){
			s=mid+1;
			ans=mid;
		}
		else{
			e=mid-1;
		}
	}

	//Fractional part-:
	float inc = 0.1;

	for (int i = 0; i < p; i++){

		while(ans*ans<=no){
			ans += inc;
		}
		//ans*ans>no;
		ans = ans - inc;
		inc = inc/10;
	} 

	return ans;

}


int main(){

	int n,p;
	cin >> n >> p ;

	float ans = squareRoot(n,p);

	cout << ans << endl ;

}