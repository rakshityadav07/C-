// The main trick in this problem is to keep counting the number of operators/operands lying between each pair of opening and closing braces.
// If the count is 0 (e.g. () this is invalid) or 1 (e.g. (a) this is also invalid) then the expression has redundant braces.
// So the algo comes down to this -

// 1. Keep pushing into a stack till you find a closing brace (')' or ']' or '}').
// Once you encounter a closing brace , go to step 2.
// 2. a. Keep popping elements from the stack, till you reach an opening brace ('(' or '[' or '{'). Also while popping keep counting the number of elements being popped.
// b. If the count is 0 or 1 then the expression has redundant brace.
// c. Else, go to step 1 to scan rest of the string.
#include <iostream>
#include <stack>

using namespace std;

bool DuplicateExpressionParanthesis(string str){

	stack<char> s;
	int n = str.size();

	for (int i = 0; i < n; ++i){
		char c = str[i];
		if(c == ')'){
			char top = s.top();
			s.pop();
			
			int count = 0; 
			while(top != '('){	
				count++;
				top = s.top();
				s.pop();
			}

			if(count < 1){
				return true;
			}
		}
		else{
			s.push(c);
		}
	}
	return false;

}

int main(){
	
	string s;
	cin>>s;

	bool ans = DuplicateExpressionParanthesis(s);
	if(ans){
		cout<<"duplicate found";
	}else{
		cout<<"No duplicate found";
	}

	return 0;
}
