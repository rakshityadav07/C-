#include <iostream>
using namespace std;

void  MattrixSearch(int arr[][100],int r,int c,int target){

	int i = 0;
	int j = c-1;

	while(i<r&&j>=0){
		if(arr[i][j]==target){
			cout<<"1"<<endl;
			return ;
		}else if(arr[i][j]>target){
			j--;
		}else{
			i++;
		}
	}
	cout << "0" << endl ;

}

int main(){

	int arr[100][100];

	int r,c;
	cin >> r >> c ;

	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cin >> arr[i][j];
		}
	}

	int target;
	cin >> target ;

	MattrixSearch(arr,r,c,target);
}