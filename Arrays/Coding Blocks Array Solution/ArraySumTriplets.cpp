#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int n;
	cin >> n;

	int ar[10005];

	for (int i = 0; i < n; ++i){
		cin >> ar[i] ;
	}

	sort(ar,ar+n);

	int target;
	cin >> target ;

	for (int i = 0; i < n; ++i){
		int j = i+1;
		int k = n-1;

		while(j<k){
			int sum = ar[i]+ar[j]+ar[k];
			if(sum==target){
				cout << ar[i] << ", " << ar[j] << " and " << ar[k] << endl;
				j++;
				k--;
			}else if(sum > target){
				k--;
			}else{
				j++;
			}
		}
	}

}