class Solution {
public:
    //sliding window
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0;
        int l=0, r=0, zerocount = 0;
        for(; r<nums.size(); r++){
            if(nums[r]==0) zerocount++;

            while(zerocount > k){
                if(nums[l]==0) zerocount--;
                l++;
            }
            maxlen = max(maxlen, r-l+1);
        }

        return maxlen;
    }
};