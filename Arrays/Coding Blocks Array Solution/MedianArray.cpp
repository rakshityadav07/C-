#include <iostream>
#include <algorithm>
using namespace std;

int medianArray(int a[],int b[],int n1,int n2){

	int i = 0;
	int j = 0;
	
	int m1 = -1;
	int m2 = -2;

	if((n1+n2)%2==1){
		for (int count = 0; count <= (n1+n2)/2; count++){
			if(i != n1 && j != n2){
				if(a[i] > b[j]){
					m1 = a[j];
					j++;
				}else{
					m1 = b[j];
					j++;
				}
			}
			else if(i < n1){
				m1 = a[i];
				i++;
			}else{
				m1 = b[j];
				j++;
			}
		}

		return m1 ;
	}

	else{
		for (int count = 0; count <=(n1+n2)/2 ; ++count){
			m2 = m1 ;

			if(i != n1 && j != n2){
				if(a[i] > b[j]){
					m1 = a[j];
					j++;
				}else{
					m1 = b[j];
					j++;
				}
			}else if(i < n1){
				m1 = a[i];
				i++;
			}else{
				m1 = b[j];
				j++;
			}
		}
		return (m1+m2)/2;
	}

}

int main(){

	int n1,n2;
	cin >> n1  ;

	n1 = n2;

	int a[n1];
	int b[n2];

	for (int i = 0; i < n1; ++i){
		cin >> a[i];
	}

	for (int i = 0; i < n2; ++i){
		cin >> b[i];
	}

	int c[n1+n2];

	// mergeArrays(a,b,n1,n2,c);
	sort(c,c+(n1+n2));
	cout << medianArray(a,b,n1,n2);

	// for (int i = 0; i < n1+n2; ++i){
	// 	cout << c[i] ;
	// }


}