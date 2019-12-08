#include <iostream>
#include <algorithm>

using namespace std;

bool isValid(int stalls[],int n,int c,int mid){

	int cows = 1;
	int curAlloc = stalls[n];

	for (int i = n; i < 0; i+mid){

		if(stalls[i] - curAlloc >= mid) 
			c++;
		if(cows == c){
			return true;
		}

		curAlloc = stalls[i]; 

	}

	return false;

}


int minDist(int stalls[],int n,int c){

	int s = stalls[0] ;
	int e = stalls[n-1];
	int mid;
	int finalAns;

	while(s>=e){

		mid = (s+e)/2;1

		if(isValid(stalls,n,c,mid)==1){
			finalAns = mid;
			s = mid+1;
			//As we want to maximize the gap;
		}else{
			e = mid -1;
		}

	}

	return finalAns ;
}


/*// Now the isValid Function takes as input the the minimum distance (or the mid point), number of cows, the array of stall positions and size of the array

int isValid(int stalls[],int n,int s,int current_ans){

	int cow = 1;
	int currently_alloted = stalls[0];

	for(int i=1;i<n;i++){

		if(stalls[i]-currently_alloted >= current_ans){
			cow++;
			if(cow==s){
				return 1;
			}
			currently_alloted = stalls[i];

		}
	}
	return 0;
}

int minDist(int stalls[],int n,int k){

	int s = stalls[0];
	int e = stalls[n-1];

	int ans = 0;
	int mid = 0;
	while(s+1<e){      //here if you take s<e, it will become an infinite loop once we reach the required answer.
	mid = (s+e)/2;

	if(isValid(stalls,n,k,mid)==1){
		s = mid;
	}
	else{
		e = mid;
	}
}
return s;
}*/

int main(){

	int n;
	cin >> n ;

	int c;
	cin >> c; 

	int stalls[100];

	for (int i = 0; i < n; ++i){
		cin >> stalls[i] ;
	}

	sort(stalls,stalls+n);

	int ans  = minDist(stalls,n,c);
	cout << ans;

}	