#include <iostream>
#include<cstring>
using namespace std;
int main() {
	
	string a;
	getline(cin,a);

	int n;
	cout<<a[0];

	for(int i = 1; i<a.length(); i++){
		n = a[i]-a[i-1];
		cout<<n<<a[i];
	}

}
