class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        //Edge cases
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];

        int l=0, h=n-1, mid;

        while(l<=h){
            mid = (l+h)/2;

            //if mid is single ele
            if((nums[mid-1]!=nums[mid]) && (nums[mid]!=nums[mid+1])){
                return nums[mid];
            }

            if(mid%2==0){ 
                if(nums[mid]==nums[mid+1]) l = mid+2;
                else h = mid;
            }
            else{
                if(nums[mid-1]==nums[mid]) l = mid+1;
                else h = mid-1;
            }
        }
        return 0;
    }
};