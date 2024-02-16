class Solution {
public:
    //Using Bit manipulation
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> ans;
        int n = nums.size(), setSize= 1<<n; //(2^n)

        for(int i=0; i<setSize; i++){
            vector<int> temp;
            for(int j=0; j<n; j++){
                if(i & (1<<j)) temp.push_back(nums[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }

    // void findsubsets(vector<vector<int>> &ans, vector<int> nums, vector<int> temp, int i){
    //     if(i == nums.size()){
    //         ans.push_back(temp);
    //         return;
    //     }
        
    //     findsubsets(ans, nums, temp, i+1);//calling func without taking ith elem

    //     temp.push_back(nums[i]);
    //     findsubsets(ans, nums, temp, i+1);//calling function with ith elem
    // }

    // vector<vector<int>> subsets(vector<int>& nums) {
    //     vector<vector<int>> ans;
    //     vector<int> temp;
    //     findsubsets(ans, nums, temp, 0);
    //     return ans;
    // }
};