class Solution {
public:
    //OPTIMAL SOLUTION O(N) Extended moore's voting algorithm
    vector<int> majorityElement(vector<int>& nums){
        int c1=0, c2=0, e1=INT_MIN, e2=INT_MIN;
        for(auto i:nums){
            if(c1==0 && e2!=i){
                c1 = 1; e1 = i;
            }
            else if(c2==0 && e1!=i){
                c2 = 1; e2 = i;
            }
            else if(e1==i) c1++;
            else if(e2==i) c2++;
            else{
                c1--; c2--;
            }
        }
        cout<<e1<<" "<<e2<<endl;
        vector<int> ans;
        c1=0; c2=0;
        for(auto i:nums){
            if(i==e1) c1++;
            else if(i==e2) c2++;
        }
        if(c1>nums.size()/3) ans.push_back(e1);
        if(c2>nums.size()/3) ans.push_back(e2);

        return ans;
    }

    // BETTER SOLUTION
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        int N = nums.size();
        for(auto i:nums){
            m[i]++;
        }

        for(auto i:m){
            if(i.second > N/3){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};