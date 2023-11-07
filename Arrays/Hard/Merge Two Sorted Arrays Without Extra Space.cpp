#include<vector>

//BETTER SOLUTION O(N+M+MlogM+Nlogn)
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){

	int i = a.size()-1;
	int j = 0;
	while(j<b.size() && i>=0){
		if(a[i] > b[j]){
			swap(a[i],b[j]);
			i--;
			j++;
		}
		else{
			break;
		}
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
}