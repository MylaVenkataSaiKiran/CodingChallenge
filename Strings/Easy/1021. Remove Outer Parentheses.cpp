class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string> v;
        int left=0,right=0;

        //finding primitive strings
        string temp = "";
        for(string::size_type i=0;i<s.size();i++){
            if(s[i]=='(') left++;
            else right++;
            temp += s[i];
            if(left==right){
                v.push_back(temp);
                temp.clear();
            }
        }

        //remove outer parenthesis 
        string ans = "";
        for(auto i:v){
            i.erase(0,1);
            i.pop_back();
            ans += i;
        }

        return ans;
    }
};