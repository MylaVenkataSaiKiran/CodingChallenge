class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.length();i++){
            s.push_back(s.front());
            s.erase(0,1);
            if(s.compare(goal)==0)
                return true;
        }
        return false;
    }
};