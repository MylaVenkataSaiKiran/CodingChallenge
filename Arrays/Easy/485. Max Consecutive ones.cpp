class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int count=0;
        for(auto i:nums){
            if(i==1){
                count++;
                maxcount = max(maxcount,count);
            }
            else{ //whenever there is 0, reset count
                count=0;
            }
        }

        return maxcount;
    }
};