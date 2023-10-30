#include<vector>

int getSingleElement(vector<int> &arr){
	int i=0;
	while(i<arr.size()){
		if(arr[i]==arr[i+1]){
			i += 2;
		}
		else{
			return arr[i];
		}
	}
}