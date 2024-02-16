#include <bits/stdc++.h> 
vector<string> subsequences(string str){
	vector<string> ans;
	int n = str.size();
	int setSize = 1<<n;

	for(int i=0; i<setSize; i++){
		string s;
		for(int j=0; j<n; j++){
			if(i & (1<<j)) s.push_back(str[j]);
		}
		if(!s.empty())
			ans.push_back(s);
	}

	return ans;
}
