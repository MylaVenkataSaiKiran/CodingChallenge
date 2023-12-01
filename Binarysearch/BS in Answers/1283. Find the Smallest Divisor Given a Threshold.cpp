class Solution {
public:
    int checkdivisionsum(vector<int> nums, int mid){
        int sum =0;
        for(int i=0; i<nums.size(); i++){
            sum += ceil(nums[i]/(double) mid);
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = -1;

        while(low <= high){
            int mid = (low + high)/2;

            int sum = checkdivisionsum(nums, mid);
            if(sum <= threshold){//as sum is within limit, we search with smaller divisor
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};