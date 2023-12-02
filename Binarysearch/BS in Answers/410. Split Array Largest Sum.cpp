class Solution {
public:
    bool canwesplit(vector<int> nums, int mid, int k){
        int subarraycount = 1, sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(sum + nums[i] <= mid){//add to curr subarray sum
                sum += nums[i];
            }
            else{ //add to next subarray sum
                subarraycount++;
                sum = nums[i];
            }
        }

        if(subarraycount <= k){
            return true;
        }
        return false;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;

        while(low <= high){
            int mid = (low + high)/2;
            if(canwesplit(nums, mid, k)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};