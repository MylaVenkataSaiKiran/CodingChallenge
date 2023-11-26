class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_set<char> s1;
        unordered_map<char, char> m;

        for(int i=0; i<s.size();i++){
            if(m.find(s[i])!=m.end()){ //s[i] is present in map
                if(m[s[i]]!=t[i]) //but not mapping to t[i]
                    return false;
            }
            else{ //s[i] is not present in map
                if(s1.find(t[i])!=s1.end()){//and t[i] is present in set
                    return false;
                }
                else{ //both s[i] and t[i] are not present
                    m[s[i]] = t[i];
                    s1.insert(t[i]);
                }
            }
        }
        return true;
    }
};