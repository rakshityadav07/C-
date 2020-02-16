#include <iostream>
#include <stack>
using namespace std;

int LongestSubstringParanthesis(string str){

	stack<char> s;
	s.push(-1);
	int result = 0;
	int n = str.size();

	for (int i = 0; i < n; ++i){

		char c = str[i];

		if(c == '('){
			s.push(i);
		}else{
			s.pop();

			if(!s.empty()){
				result = max(result , i - s.top());
			}
			else{
				s.push(i);
			}
		}
	}
	return result;
}

int main(){

	string s;
	cin>>s;

	int b = LongestSubstringParanthesis(s);
	cout<<b;
	return 0;
}
