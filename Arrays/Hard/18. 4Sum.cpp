class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> v;
        vector<int> temp;
        long long sum;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i-1]==nums[i]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j-1]==nums[j]) continue;
                int k = j+1, l = n-1;
                while(k<l){
                    sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum>target) l--;
                    else if(sum<target) k++;
                    else{
                        temp = {nums[i], nums[j], nums[k], nums[l]};
                        v.push_back(temp);
                        temp.clear();
                        do{
                            k++;
                        }while(k<l && nums[k-1]==nums[k]);
                        do{
                            l--;
                        }while(k<l && nums[l]==nums[l+1]);
                    }
                }
            }
        }

        return v;
    }
};