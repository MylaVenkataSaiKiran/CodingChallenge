class Solution {
public:
    //OPTIMAL SOLUTION
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        vector<int> temp;
        int sum;
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            //remove duplicates
            if(i!=0 && nums[i]==nums[i-1]) continue;
            //move two pointers
            int j=i+1, k=n-1;
            while(j<k){
                sum = nums[j]+nums[k]+nums[i];
                if(sum > 0) k--;
                else if(sum < 0) j++;
                else{
                    temp = {nums[i], nums[j], nums[k]};
                    v.push_back(temp);
                    temp.clear();
                    //skip duplicates
                    do{
                        j++;
                    }while(j<k && nums[j-1]==nums[j]);
                    do{
                        k--;
                    }while(j<k && nums[k]==nums[k+1]);
                }
            }
        }

        return v;
    }
};