class Solution {
public:
    //OPTIMAL using map+stack
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        stack<int> s;
        vector<int> ans;

        for(int j=nums2.size()-1; j>=0; j--){
            while(!s.empty() && s.top()<=nums2[j]){
                s.pop();
            }

            if(s.empty()) m[nums2[j]] = -1;
            else m[nums2[j]] = s.top();

            s.push(nums2[j]);
        }

        for(auto i:nums1){
            ans.push_back(m[i]);
        }

        return ans;
    }

    //Naive solution 
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>  ans;
        for(auto i:nums1){
            for(int j=0; j<nums2.size(); j++){
                if(i==nums2[j]){
                    int k = j+1;
                    while(k!=nums2.size() && nums2[k] <= nums2[j]){
                        k++;
                    }
                    if(k==nums2.size()) ans.push_back(-1);
                    else ans.push_back(nums2[k]);
                    break;
                }
            }
        }

        return ans;
    }
};