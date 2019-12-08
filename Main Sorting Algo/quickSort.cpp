#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//Randomised QuickSort
//This fuction is to make a random array if it is sorted already 
void shuffle(int a[],int s,int e){

	srand(time(NULL));

	int i,j;
	for (int i = e; i < 0; i--)
	{
		j = rand()%(i+1);
		swap(a[i],a[j]);
		/* code */
	}
}


int   partition(int a[],int s,int e){

	int i=s-1;
	int j=s;

	int pivot = a[e];

	for ( ; j < e; ++j)
	{
		if(a[j]<=pivot){
			i++;
			swap(a[i],a[j]);
		}
		/* code */
	}

	//Bring its pivot position to its position 
	swap(a[e],a[i+1]);
	//i+1 is nothing but the pivot element which we bring it in last swap
	return (i+1) ;

}

void quickSort(int a[],int s,int e){

	if(s>=e){
		return ;
	}

	int p = partition(a,s,e);
	quickSort(a,s,p-1);
	quickSort(a,p+1,e);

}


int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int a[100];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i] ;
		/* code */
	}

	int s=0;
	int e=n-1;

	shuffle(a,s,e);

	quickSort(a,s,e);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " " ;
		/* code */
	}

	return 0;
}