#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

bool balancedParanthesis(string str){

	stack<char> s;
	int n = str.size();
	
	for (int i = 0; i < n; ++i){
		char c = str[i];

		if(c =='(' || c =='{' || c =='['){
			s.push(c);
		}

		// Because it will be the opening bracket or the closing bracket 
		// So the stack cannot be empty
		if(s.empty()) 
			return false;

		if(c == ')'){
			char x = s.top();
			s.pop();
			if(x == '{' || x == '['){
				return false;
			}
		}
		else if(c == '}'){
			char x = s.top();
			s.pop();
			if(x == '(' || x == '['){
				return false;
			}
		}
		else if(c == ']'){
			char x = s.top();
			s.pop();
			if(x == '{' || x == '('){
				return false;
			}
		}
	}
	if(s.empty()) return true;
	else return false; 
}


int main(){

	
	string str;
	cin>>str;

	bool ans = balancedParanthesis(str);
	// cout<<endl;
	if(ans==true){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}

	return 0;
}
