int upperBound(vector<int> &arr, int x, int n){
	int l=0, h=n-1, mid;

	while(l<=h){
		mid = (l+h)/2;
		//if arr[mid] is x, then mid+1 is upperbound
		//if x is in right half then go to right half by l=mid+1
		//if x is in left half then go to left half by h=mid-1
		if(x >= arr[mid]){ 
			l = mid+1;
		}
		else{
			h = mid-1;
		}
	}
	return l;
}