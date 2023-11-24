int lowerBound(vector<int> arr, int n, int x) {
	int l=0, h=n-1, mid;
	while(l<=h){
		mid = (l+h)/2; 

		if(x <= arr[mid]){ //mid is ans but search in left half if there is still smaller
			h = mid-1;
		}
		else{ //x is greater 
			l = mid+1; //search in right half
		}
	}
	return h+1;
}