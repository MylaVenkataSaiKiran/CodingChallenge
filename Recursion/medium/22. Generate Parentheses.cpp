class Solution {
public:

    void findparens(vector<string> &ans, int open, int close, string s){
        if(open > 0){
            findparens(ans, open-1, close, s+"(");
        }
        if(close > 0 && close > open){ //close > open to maintain well-formed parenthesis
            findparens(ans, open, close-1, s+")");
        }

        if(open==0 && close==0) ans.push_back(s);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        findparens(ans, n, n, "");
        return ans;
    }
};