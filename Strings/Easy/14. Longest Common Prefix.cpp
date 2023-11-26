class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        
        for(int i=1;i<strs.size();i++){
            int j = 0;
            while(j<ans.size() && strs[i][j]==ans[j]){
                j++;
            }
            ans.erase(ans.begin()+j, ans.end()); //if j end less than ans.size()
        }
        return ans;
    }
};