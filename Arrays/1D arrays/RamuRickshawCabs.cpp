#include <iostream>
using namespace std;
int main(){

	int t;
	cin >> t;

	int c1,c2,c3,c4,n,m ;
	int rick[1005],cab[1005];

	while(t--) {
		cin >> c1 >> c2 >> c3 >> c4 ;
		cin >> n >> m ;

		for (int i = 0; i < n; ++i){
			cin >> rick[i];
		}

		for (int i = 0; i < m; ++i){
			cin >> cab[i];
		}

		int rickCost = 0;
		for (int i = 0; i < n; ++i){
			rickCost = rickCost + min(c1*rick[i],c2) ;
		}
		rickCost = min(rickCost , c3) ; 

		int cabCost = 0;
		for (int i = 0; i < m; ++i){
			cabCost = cabCost + (c1*cab[i], c2);
		}

		cabCost = min(cabCost ,c3);

		int finalCost = min(c4,(cabCost + rickCost));

		cout << "Minimum cost for travelling will be : " << finalCost << endl ;

	}

}
