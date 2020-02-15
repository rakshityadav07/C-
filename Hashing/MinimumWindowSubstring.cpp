#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;

string MinimumWindowSubstring(string s1,string pat){

	int len1 = s1.size();
	int len2 = pat.size();

	if(len1 < len2){
		// cout << "No Window"<<endl;
		return "No Window";
	}

	int hash_str[256] = {0};
	int hash_pat[256] = {0};

	for (int i = 0; i < len2; ++i){
		hash_pat[pat[i]] += 1;
	}

	int start = 0, start_index = -1, min_len = INT_MAX;
	int count = 0;

	for (int j = 0; j < len1; ++j){
		
		hash_str[s1[j]] += 1;
		//here 1 condition is if the char is present in the pattern or not 
		// 2 conition is 
		if(hash_pat[s1[j]] != 0 && hash_str[s1[j]] <= hash_pat[pat[j]]){
			count+=1;
		}

		// for every elemet if the frequency of the char is more than the required one in the pattern than 
		// we do the shrink the by using the if condition
		// and we also check if the pattern consits of the element of 
		// Shrinking the window by checking the if condition that if one char is occuring more than once than we shrink the
		// string from the start nad moves the start pointer to the next 
		
		if(count == len2){
			while(hash_str[s1[start]] > hash_pat[s1[start]] || hash_pat[s1[start]] == 0){
				if(hash_str[s1[start]] > hash_pat[s1[start]]){
					hash_str[s1[start]] -= 1;
				}

				start+=1; 
			}

			int len_window = j - start + 1;
			
			if(min_len > len_window){
				min_len = len_window;
				start_index = start;
			}

		}

	}

	if(start_index == -1){
		// cout<<"No Window"<<endl;
		return "No Window";
	}

	return s1.substr(start_index, min_len);

}

int main(){

	string s1,s2;
	cin>>s1>>s2;
	cout<<MinimumWindowSubstring(s1,s2);

} 
