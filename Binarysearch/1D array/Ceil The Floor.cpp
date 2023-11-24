pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int l=0, h=n-1, mid;

	while(l<=h){
		mid = (l+h)/2;
		if(x==a[mid]){
			return {a[mid],a[mid]};
		}
		else if(x > a[mid]){
			l = mid+1;
		}
		else{
			h = mid-1;
		}
	}
	//if x is not found, it terminates i.e l>h
	//so l is ceiling index and h is floor index
	if(h<0){
		return {-1, a[l]};
	}
	else if(l>=n){
		return {a[h], -1};
	}
	return {a[h],a[l]};
}