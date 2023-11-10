class Solution {
public:

    //BOTH ARE O(N)-time O(1)-space
    // solution 1:
    int maxProduct(vector<int>& nums){
        int p1=nums[0], p2 = nums[0], ans = nums[0];

        nums.erase(nums.begin()); //don't need to iterate for first ele again
        for(auto i:nums){
            int temp = max({i, p1*i, p2*i});
            p2 = min({i, p1*i, p2*i}); //max neg prdt
            p1 = temp; //max pos prdt

            ans = max(ans, p1);
        }

        return ans;
    }

    //solution 2:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN, n = nums.size();
        int prefix = 1, suffix = 1;
        for(int i=0; i<n; i++){
            if(prefix==0) prefix = 1;
            if(suffix==0) suffix = 1;
            prefix *= nums[i];
            suffix *= nums[n-i-1];
            ans = max(ans, max(prefix, suffix));
        }

        return ans;
    }
};