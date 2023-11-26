class Solution {
public:
    string reverseWords(string s) {
        s += " ";
        string temp="", ans="";

        for(auto i:s){
            if(i!=' '){
                temp += i;
            }
            else{
                if(!temp.empty()){
                    ans.insert(0,temp);
                    ans.insert(0," ");
                    temp.clear();
                }
            }
        }

        ans.erase(0,1);
        return ans;
    }
};