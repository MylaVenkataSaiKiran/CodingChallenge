class Solution {
public:
    //Optimal time-O(N) & space-O(1)
    int countsubarrays(vector<int>&nums, int k){
        int left=0, right=0, oddcnt=0, ans=0;
        if(k < 0) return 0;
        for(; right<nums.size(); right++){
            if(nums[right]%2) oddcnt++;

            if(oddcnt > k){
                while(nums[left]%2==0 && left<nums.size()) left++;
                oddcnt--;
                left++;
            }

            ans += (right-left+1);
        }

        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return (countsubarrays(nums, k)-countsubarrays(nums, k-1));
    }
};