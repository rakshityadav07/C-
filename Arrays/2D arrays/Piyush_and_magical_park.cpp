// #include <iostream>
// using namespace std;



// int main(){


// 	int n,m,s,k;
// 	// cout << " n and m : " ;
// 	cin >> n >> m;
// 	char a[n][m] = {}

// 	// cout << "K : Threshold " << endl ;
// 	cin >> k ;

// 	// cout << "strength" << endl; 
// 	cin >> s ;

// 	for (int i = 0; i < n; ++i){
// 		for (int j = 0; j < m; ++j){
// 			cin >> a[i][j];
// 		}
// 	}

// 	bool canGo = false ;

// 	for (int i = 0; i < n; ++i){
// 		for (int j = 0; j < m; ++j){

// 			if(s<k){
// 				canGo = true;
// 				break ;
// 			}

// 			if(a[i][j] == '.'){
// 				s = s-2;
// 			}else if(a[i][j] == '*'){
// 				s = s+5;
// 			}else{
// 				break ;
// 			}

// 			if(j<m-1){
// 				s=s-1;
// 			}
// 		}
// 	}

// 	if (!canGo && s>=k ) {
// 		cout << "Yes" << endl;
// 		cout << s ;
// 	} else {
// 		cout << "No" << endl;
// 	}

// }




#include<iostream>
using namespace std;

int main() {

	int n = 0, m = 0, k = 0, S = 0;

	cin>>n;
	cin>>m;
	cin>>k;
	cin>>S;

	char array[n][m] ;

	for (int i = 0; i < n; i ++)
		for (int j = 0; j < m; j ++)
			cin>> array[i][j];

		bool canGo = true;
		for (int i = 0; i < n; i ++) {
			for (int j = 0; j < m; j ++)
			{

            //Because with * you can earn 5 points, thus surviving in the park.
            // The case when he has no strength
				if (S <=0 && array[i][j]!='*') {
					canGo = false;
					break;
				}
				if (array[i][j] == '#')
					break;
				if (array[i][j] == '.') 
					S = S - 2;

				if (array[i][j] == '*')
					S += 5;

				if (j < (m - 1))
					S = S - 1;
			}
		}
    //S should be greater than or equal to k to reach home
		if (canGo && S>=k){
			cout<<"Yes"<<endl;
        //You have to print S only in case of success
			cout<<S<<endl;
		}
		else
			cout<<"No"<<endl;


		return 0;
	}
