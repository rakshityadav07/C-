#include <iostream>
#include <stack>
using namespace std;


// Remains unknown
void HistogramArea(int arr[],int n){

	stack<int> s;

	int maximum = 0;
	int HistogramArea1,HistogramArea2;

	for (int i = 0; i < n; ++i){

		if(s.empty() || arr[i] < s.top()){
			s.push(i);
		}
		else{
			s.pop();
			if(s.empty()){
				HistogramArea1 = arr[i]*i;
			}else{
				HistogramArea2 = arr[i]*(i-s.top()-1);
			}
			maximum = max(HistogramArea1,HistogramArea2);
		}
	}

	cout << maximum << endl ;

}

int main(int argc, char const *argv[]){

	int arr[] = {6,2,5,4,5,1,6,0};
	int n = sizeof(arr)/sizeof(int);

	HistogramArea(arr,n);

	return 0;
}