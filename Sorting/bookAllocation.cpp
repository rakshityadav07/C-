#include <iostream>
#include <algorithm>

#define ll long long int

using namespace std;

bool isvalidConfig(ll books[],ll n,ll m,ll ans){

	int students = 1;
	ll curentPages = 0;

	for (int i = 0; i < n; ++i){

		if(curentPages+books[i] > ans){
			curentPages = books[i];
			students++;

			if(students>m){
				return false;
			}
		} 
		else{
			curentPages += books[i];
		}
		
	}
	return true;
}


ll binarySearchBooks(ll books[],ll n,ll m){

	ll total_pages = 0;
	ll s = 0;
	ll e = 0;

	for (int i = 0; i < n; ++i){
		total_pages += books[i];
		s = max(s,books[i]);
	}

	e = total_pages ;
	ll mid ;
	ll finalAns = s;

	while(s<=e){
		mid = (s+e)/2;

		if(isvalidConfig(books,n,m,mid)){
			// true
			finalAns = mid;
			e=mid-1;
		}
		else{
			// false
			s=mid+1;
		}
	}

	return finalAns;

}

int main(){

	ll n,m;
	cin >> n >> m;

	ll books[100005];

	for (int i = 0; i < n; ++i){
		cin >> books[i] ;
	}

	cout << binarySearchBooks(books,n,m);

}