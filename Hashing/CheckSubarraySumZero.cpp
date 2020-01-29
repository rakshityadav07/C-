#include <iostream>
#include <unordered_set>
#include <set>

using namespace std;

bool checkIfsubarraySumZero(int *arr,int n){
	int preSum=0;
	unordered_set<int> s; 

	for (int i = 0; i < n; ++i){
		preSum += arr[i];
		if(preSum == 0 || s.find(preSum) != s.end()){
			return true;
		}
		s.insert(preSum);
	}
	return false;
}

int main()
{

	int n;
	cin>>n;
	int *arr = new int[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	bool check = checkIfsubarraySumZero(arr,n);
	if(check==0){
		cout << "No" << endl;
	}else{
		cout << "Yes" <<endl;
	}

	return 0;
}