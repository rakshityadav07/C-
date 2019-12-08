#include <iostream>
using namespace std;


void Merge(int a[],int s,int e){

	int mid =(s+e)/2;

	int i=s;
	int j=mid+1;
	int k=s;

	int temp[100];

	while(i<=mid && j<=e){

		if(a[i] < a[j]){
			temp[k++] = a[i++] ;
		}
		else{
			temp[k++] = a[j++] ;
		}
	}

	while(i<=mid){
		temp[k++] = a[i++];
	}
	while(j<=e){
		temp[k++] = a[j++];
	}

	for (int i = s; i <= e; ++i)
	{
		a[i] = temp[i] ;
		/* code */
	}

}


void Mergesort(int a[],int n,int s,int e){

	if(s>=e){
		return ;
	}

	/*3 Steps*/
	//1st step = Divide
	int mid = (s+e)/2;

	//2.Recursive sort
	Mergesort(a,n,s,mid);
	Mergesort(a,n,mid+1,e);

	//3.Merge the array
	Merge(a,s,e);

}


int main(int argc, char const *argv[])
{
	int n;
	cin >> n ;

	int a[100];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i] ;
		/* code */
	}

	int s=0;
	int e=n-1;

	Mergesort(a,n,s,e);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << "," ;
		/* code */
	}

	return 0;
}