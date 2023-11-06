#include<vector>
#include<bits/stdc++.h>

// OPTIMAL Solution
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	int prefixsum =0, maxlen=0;
	unordered_map<int,int> m;
	for(int i=0; i<arr.size(); i++){
		prefixsum += arr[i];
		if(prefixsum==0) maxlen = i+1;

		if(m.find(prefixsum)!=m.end()){
			maxlen = max(i-m[prefixsum], maxlen);
		}

		if(m.find(prefixsum)==m.end()){
			m.insert({prefixsum, i});
		}
	}
	return maxlen;
}