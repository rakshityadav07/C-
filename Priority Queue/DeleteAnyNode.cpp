// insertion in heap upheapify
#include <iostream>
#include <limits>
#include <vector>
using namespace std;

// Max heap
void upheapify(vector<int> &heap,int idx){

	if(idx==0){
		return ;
	}
	int parentIdx = (idx-1)/2;
	if(heap[parentIdx] < heap[idx]){

		swap(heap[parentIdx],heap[idx]);
		// int temp = heap[parentIdx];
		// heap[parentIdx] = heap[idx];
		// heap[idx] = temp;

		upheapify(heap,parentIdx);
	}
	else{
		return;
	}
}

void insert(vector<int> &heap,int key){
	heap.push_back(key);
	upheapify(heap,heap.size()-1);
}

void display(vector<int> &heap){

	int n = heap.size();
	for (int i = 0; i < n; ++i){
		cout<<heap[i]<<" ";
	}
}

// Unoptimised verion Time Complexcity of O(nlog2n);
// This heap is made from the upheapify operation using array
void heapify(vector<int> &heap){

	int n = heap.size();
	for (int i = 0; i < n; ++i){
		upheapify(heap,i);
	}
}


void downHeapify(vector<int> &heap,int idx){

	int leftIdx =  2*idx+1;
	int rightIdx = 2*idx+2;

	// this is for the leaf node case (base case) ;
	if(leftIdx >= heap.size() && rightIdx >= heap.size()){
		return ;
	}
	// let the largest value index be the current idx
	int largestIdx = idx;
	if(leftIdx < heap.size() &&  heap[leftIdx] > heap[largestIdx]){
		largestIdx = leftIdx;
	}
	// Here if the largest index is of left child then right child will compare it to the left child 
	// and if the root idx is the largest then it will compare it with the right child
	if(rightIdx < heap.size() && heap[rightIdx] > heap[largestIdx]){
		largestIdx = rightIdx;
	}
	if(largestIdx == idx) return; 
	swap(heap[largestIdx], heap[idx]);
	// here we give the largestIdx because we swap the value not the idx so for now the largest idx will be of either 
	// left child or right child and this is their largest index and it will recursively make the down heapify call
	downHeapify(heap,largestIdx);

}

// Time complexcitty of O(n) optimisied version for building the heap from array 
void buldHeapOptimised(vector<int> &heap){

	int n = heap.size();
	for(int i=n-1 ;i>=0 ;i--){
		downHeapify(heap,i);
	}

}

void deleteAtAnyNode(vector<int> &heap,int idx){

	heap[idx] = 100000;
	upheapify(heap,idx);
	swap(heap[0],heap[heap.size()-1]);
	heap.pop_back();
	downHeapify(heap,0);

}

int main(int argc, char const *argv[])
{
	vector<int> heap;
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i){
		int x;
		cin>>x;
		heap.push_back(x);
	}
	buldHeapOptimised(heap);
	display(heap);
	cout<<endl;
	deleteAtAnyNode(heap,3);
	display(heap);

	return 0;
}