class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0, n=nums.size(), prefixsum=0;
        unordered_map<int, int> m;
        m[0]=1;
        for(int i=0; i<n; i++){
            prefixsum += nums[i];
            count += m[prefixsum-k];
            m[prefixsum]++;
        }
        return count;
    }
};