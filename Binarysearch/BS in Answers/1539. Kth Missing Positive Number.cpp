class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0, high = arr.size()-1;
        while(low <= high){
            int mid = (low+high)/2; //mid is index
            int missing = arr[mid] - (mid+1);//no. of missing numbers before mid
            if(missing < k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        int ans = high+1+k; //arr[high] + more(k-missing), where missing is for index=high
        return ans; //or low+k, as low=high+1 after termination
    }
};