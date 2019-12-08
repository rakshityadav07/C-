#include <iostream>
#include <algorithm>
using namespace std;

bool myCompare(pair<string,int> p1, pair<string,int> p2){

	if(p1.second==p2.second){
		return p1.first < p2.first ;
	}
	return p1.second > p2.second ;
}

int main(){

	int min_Salary;
	cout << "Minimum Salary : " ;
	cin >> min_Salary ;

	int n;
	cout << "No. of employees : " ;
	cin >> n ;

	pair<string,int> emp[100005];

	string name;
	int salary;

	for (int i = 0; i < n; ++i){
		cin >> name >> salary ;
		emp[i].first = name ; 
		emp[i].second = salary ;
	}

	sort(emp,emp+n,myCompare);

	cout << "Output : " << endl ;

	for (int i = 0; i < n; ++i){
		if (emp[i].second > min_Salary){
			cout << emp[i].first << " " << emp[i].second << endl;
		}
	}
}