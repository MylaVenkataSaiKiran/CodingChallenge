class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0, h=nums.size()-1, mid;
        while(l<=h){
            mid = (l+h)/2;
            if(target==nums[mid]) return true;

            //here duplicate are elements are also there
            if(nums[l]==nums[mid] && nums[mid]==nums[h]){
                l++;
                h--;
                continue; //later steps are not performed until above cond fails
            }

            if(nums[l]<=nums[mid]){ //left half is sorted
                if(nums[l]<=target && target<=nums[mid]) h=mid-1; //in left half
                else l = mid+1;
            }
            else{ //right half is sorted
                if(nums[mid]<=target && target<=nums[h]) l=mid+1; //in right half
                else h=mid-1;
            }
        }
        return false;
    }
};