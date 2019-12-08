#include <iostream>
#include <algorithm>

using namespace std;

int mycompare(pair<string,int> p1,pair<string, int> p2){

	if(p1.second == p2.second){
		return p1.first < p2.first;
	}

	return p1.second > p2.second ;

}

int main(){

	int n;
	cout << "no. of employees : ";
	cin >> n;

	string name;
	int salary;

	int minsalary;
	cout << "minsalary ";
	cin >> minsalary;

	pair<string ,int> emp[10005];

	for (int i = 0; i < n; ++i){
		cin >> name;
		cin >> salary;

		emp[i].first = name;
		emp[i].second = salary;
	}

	sort(emp,emp+n,mycompare);

	for (int i = 0; i < n; ++i){
		if(emp[i].second > minsalary)
			cout << emp[i].first << " " << emp[i].second << endl;
	}


}