#include <iostream>
#include <cstdlib>

#include <cstdio>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){

	unordered_map< string, int> myMap;

	// Can insertt in 3 ways
	// 1 Ways
	myMap["Mango"] = 20;

	// 2 ways
	myMap.insert(make_pair("Apple", 120));

	// 3 ways
	pair<string,int> p("Guava",130);
	myMap.insert(p);


	// for printing
	for (auto node : myMap){
		cout<<node.first<< " " <<node.second<<endl;
	}

	// Bucket iterator
	for (int i = 0; i < myMap.bucket_count() ; ++i)
	{
		// Iterate over evry linked list ,ith
		for(auto it = myMap.begin(i),it!=myMap.end(i),it++){
			cout <<it->first << " " << it->second << endl;
		}
		/* code */
	}

}