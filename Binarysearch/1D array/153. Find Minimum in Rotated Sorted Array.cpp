class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, h=nums.size()-1, mid;
        int ans = INT_MAX;
        while(l<=h){
            mid = (l+h)/2;
            if(nums[l]<=nums[h]){//search space is fully sorted
                ans = min(ans, nums[l]);
                break;
            }

            if(nums[l]<=nums[mid]){ //left half is sorted
                ans = min(ans, nums[l]); //leftmost ele is ans
                l = mid+1; //we have min ele in left half, so search in right half
            }
            else{ //right half is sorted
                ans = min(ans, nums[mid]); //then mid is ans, as mid is left most
                h = mid-1;//we have min ele in right half, so search in left half
            }
        }
        return ans;
    }
};