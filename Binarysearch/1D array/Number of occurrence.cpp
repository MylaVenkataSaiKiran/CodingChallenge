int count(vector<int>& arr, int n, int x) {
	int first=0, last=0;

	int l=0, h=n-1, mid;

	//first occurence
	while(l<=h){
		mid = (l+h)/2;
		if(x==arr[mid]){
			first = mid;
			h = mid-1;
		}
		else if(x > arr[mid]){
			l = mid+1;
		}
		else{
			h = mid-1;
		}
	}

	l=0, h=n-1;
	// last occurence
	while(l<=h){
		mid = (l+h)/2;
		if(x==arr[mid]){
			last = mid;
			l = mid+1;
		}
		else if(x > arr[mid]){
			l = mid+1;
		}
		else{
			h = mid-1;
		}
	}

	if(last>0){ //implies last is also > 0
		int ans = last-first+1;
		return ans;
	}

	return 0;
}

