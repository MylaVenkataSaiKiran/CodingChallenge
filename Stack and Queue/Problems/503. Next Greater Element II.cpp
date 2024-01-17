class Solution {
public:
    //OPTIMAL 
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        stack<int> s;
        int n = nums.size();
        for(int i=2*n-1; i>=0; i--){
            while(!s.empty() && s.top()<=nums[i%n]){
                s.pop();
            }

            if(i<n){
                if(s.empty()) ans[i] = -1;
                else ans[i] = s.top();
            }

            s.push(nums[i%n]);
        }

        return ans;
    }
};