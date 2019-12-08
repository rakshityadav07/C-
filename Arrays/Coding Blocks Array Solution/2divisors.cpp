#include <iostream>
using namespace std ;

int main(){

	int t;
	cin >> t; 

	while(t--){
		
		int a,b;
		cin >> a;
		cin >> b;

		int count = 0;

		for (int i = a; i <= b; ++i){
			
			bool flag = true;

			if(i==0){
				flag = false;
			}

			if(i==1){
				flag = false;
			}

			
			for (int j = 2; j < i-1; ++j){
				if(i%j == 0){
					flag = false ;
					break;
				}
			}
			
			if(flag == true){
				count ++ ;
			}
		}

		cout << count << endl ;
	}

}