#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

bool checkExpression(string c){

	stack<char> s;
	int n = c.size();

	for (int i = 0; i < n; ++i){
		char currChar = c[i];
		if(currChar=='('){
			s.push(currChar);
		}
		else if(currChar==')'){
			if(s.empty() || s.top()!='('){
				return false;
			}
			s.pop();
		}
	}
	if(s.empty()) return true;
	else return false; 

}


int main(){

	string c;
	cin>>c;

	// stack<char> s;

	bool ans = checkExpression(c);

	if(ans){
		cout << "Balanced Paranthesis";
	}else{
		cout << "Not having Balanced Paranthesis";
	}


}