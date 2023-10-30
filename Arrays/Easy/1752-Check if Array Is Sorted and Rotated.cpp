class Solution {
public:
    // void rotate(vector<int>& nums, int i){
    //     vector<int> a;
    //     for(int i=0;i,nums.size();i++){
    //         a[i] = nums[(i+)]
    //     }
    // }

    bool check(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                x=i+1;
            }
        }
        if(x==0) return true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[(i+x)%nums.size()]>nums[(i+1+x)%nums.size()]){
                return false;
            }
        }
        return true;
    }
};