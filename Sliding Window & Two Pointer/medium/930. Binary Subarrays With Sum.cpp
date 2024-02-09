class Solution {
public:
    //USing Hashmap time- O(N) space-O(N)
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int prefixsum = 0, ans = 0;
        unordered_map<int, int> m;
        m[0]++;
        for(int i=0; i<nums.size(); i++){
            prefixsum += nums[i];
            
            ans += m[prefixsum - goal];
            m[prefixsum]++;
        }

        return ans;
    }

    //Optimal O(N)-time and O(1)-space
    //function to count no. of subarrays with sum<=goal
    int countsubarrays(vector<int>& nums, int goal){
        int left=0, right=0, ans=0;
        int sum=0;
        if(goal < 0 ) return 0;
        for(; right<nums.size(); right++){
            sum += nums[right];//similar to prefix sum
            if(sum > goal){//if sum is greater than goal
                //remove left elems
                while(sum > goal && left<nums.size()){
                    sum -= nums[left];
                    left++;
                }
            }

            ans += (right-left+1);//this represents no. of subarrays 
        }

        return ans;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal){
        return (countsubarrays(nums, goal) - countsubarrays(nums, goal-1));
    }
};