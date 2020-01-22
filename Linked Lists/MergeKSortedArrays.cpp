#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

#include <queue>

using namespace std;

typedef pair<int ,pair<int,int> > customPair;

vector<int> mergrKsortedArrays(vector<vector<int> > arr){
	vector<int> result;
	priority_queue<customPair ,vector<customPair> , greater<customPair> > pq;
	
	for (int i = 0; i < arr.size(); ++i){
		pq.push({arr[i][0] ,{i,0}});
	}

	while(pq.empty() == false){
		customPair curr = pq.top();
		pq.pop();
		int x = curr.second.first;
		int y = curr.second.second;
		// curr.first is showing the element 
		result.push_back(curr.first);
		// check if one of the array is not emmpty and if not then push the next element
		if(y+1 < arr[x].size()){
			pq.push({arr[x][y+1] ,{x,y+1}});
		}
	}
	return result;
}

int main(){

	vector<vector<int> > arr{
		{2,6,12,15},
		{1,9,13,15},
		{20,24,30,32}
	};

	vector<int> output = mergrKsortedArrays(arr);

	for(int x : output){
		cout << x << " " ;
	}
}
