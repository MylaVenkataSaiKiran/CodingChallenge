int checkgastations(vector<int> arr, long double mid, int k){
	int numgastations=0, count=0;
	for(int i=0; i<arr.size()-1; i++){
		int stations = (arr[i+1] - arr[i])/mid; //no. of stations that can be inserted btw i+1 & i
		if((stations*mid) == (arr[i+1]-arr[i])){
			stations--;
		}
		numgastations += stations; //total no. of gas stations
	}
	return numgastations;
}

double minimiseMaxDistance(vector<int> &arr, int k){
	long double low = 0, high = -1;
	for(int i=0; i<arr.size()-1; i++){
		high = max(high, (long double)(arr[i+1]-arr[i]));
	}

	long double ans = high, diff = 1e-6;
	while((high - low) > diff){
		long double mid = (low + high)/(2.0); //represents mindist between adjacent gas stations
		int numgastations = checkgastations(arr, mid, k);
		if(numgastations <= k){ 
			ans = mid;
			high = mid;//we need minimum dist
		}
		else{
			low = mid;
		}
	}
	return ans;
}
