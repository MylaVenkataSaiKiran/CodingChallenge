class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, mid;

        while(low<=high){
            mid = (low+high)/2;
            if(target==nums[mid]) return mid;

            if(nums[low]<=nums[mid]){//left half is sorted
                if(nums[low]<=target && target<=nums[mid]){//present in left half
                    high = mid-1; //remove right half
                }
                else{
                    low = mid+1;
                }
            }
            else{//right half is sorted
                if(nums[mid]<=target && target<=nums[high]){//present in right half
                    low = mid+1; //remove left half
                }
                else{
                    high = mid-1;
                }
            }
        }

        return -1;
    }
};