//OPTIMAL Solution O(N) - Moore's Voting algorithm
int majorityElement(vector<int> v) {
	int count=0, elem = v[0];

	for(int i=0;i<v.size();i++){
		if(v[i]==elem) count++;
		else{
			if(count>0) count--;
			else elem = v[i];
		} 
	}
	return elem;
}


//O(N*logN) solution
int majorityElement(vector<int> v) {
	sort(v.begin(),v.end());

	int maxfreq = 0, count=1;
	int n =v.size();
	if(n==1) return v[0];
	for(int i=0;i<n-1;i++){
		if(v[i]==v[i+1]) count++;
		else count=1;
		if(count>(n/2)) return v[i];
	}
	return maxfreq;
}