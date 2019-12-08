#include <iostream>
using namespace std;


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

	// Mergesort(a,n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << endl ;
		/* code */
	}

	return 0;
}