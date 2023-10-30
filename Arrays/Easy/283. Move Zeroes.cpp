class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //BETTER SOLUTION
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }

        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0){
        //         nums.erase(nums.begin()+i);
        //         nums.push_back(0);
        //         i--;
        //         n--;
        //     }
        // }
    }
};