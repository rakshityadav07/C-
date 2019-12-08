#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int myCompare(pair<string,int> p1,pair<string,int> p2){

	//1.name
	//2.salary

	//Prefrence salary > name ;
	if(p1.second == p2.second){
		return p1.first < p2.first ;
	}

	return p1.second > p2.second ;
}

int main(){

	int n;

	pair<string ,int> emp[10005] ;

	int minSalary;
	cin >> minSalary ;

	cout << " no of employees ";
	cin >> n ;

	string name;
	int salary;

	for (int i = 0; i < n; ++i){

		cin >> name ;
		cin >> salary ;

		emp[i].first = name;
		emp[i].second = salary;

	}

	sort(emp,emp+n,myCompare) ;

	for (int i = 0; i < n; ++i){
		if(emp[i].second > minSalary){
			cout << emp[i].first << " " << emp[i].second << endl ;
		}
	}

}