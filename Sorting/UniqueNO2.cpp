#include <iostream>

using namespace std;

void uniquw2(int *a,int n){

	int res = 0;
	for (int i = 0; i < n; i++){
		res = res^a[i];
	}

	int i = 0;
	int temp = res;
	while(temp>0){
		if(temp&1){
			break;
		}
		i++;
		temp = (temp>>1);
	}

	int mask = (1<<i);

	int firstno = 0;
	for (int j = 0; j < n; j++){
		if((mask&a[j])!=0){
			firstno = firstno^a[j];
		}
	}

	int secondNo = res^firstno;

	if(firstno<secondNo){
		cout << firstno << " " << secondNo ;
	}
	else{
		cout << secondNo << " " << firstno ;
	}

}

int main(){

	int n;
	cin >> n ;	

	int a[10005];

	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	uniquw2(a,n);

	return 0;

}


// int main() {

// 	int n;
// 	cin >> n;

// 	int a[n];

// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 	}

// 	int mask=0;
// 	for (int i = 0; i < n; i++) {
// 		mask^=a[i];
// 	}

// 	int result=mask;
// 	int count=0;
// 	if(!(mask&1)){
// 		count++;
// 		mask>>=1;
// 	}

// 	mask = 1;
// 	while(count--){
// 		mask<<=1;
// 	}


// 	int num1 =0;
// 	int num2 = 0;
// 	for (int i = 0; i < n; i++) {
// 		if((a[i]&mask)!=0){
// 			num1^=a[i];
// 		}
// 	}
// 	num2=result^num1;

// 	if(num1<num2){
// 		cout << num1<<" "<<num2 <<endl;
// 	}else{
// 		cout << num2<<" "<<num1 <<endl; 
// 	}

// 	return 0;

// }