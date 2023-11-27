class Solution {
public:
    //solution - 1
    bool isAnagram(string str1, string str2)
    {
        if(str1.size()!=str2.size())
            return false;

        int count[26] = {0};

        for(auto c:str1){
            count[c-'a']++;
        }

        for(auto c:str2){
            count[c-'a']--;
        }


        for(int i=0; i<26; i++){
            if(count[i]!=0)
                return false;
        }
        return true;
    }

    //solution - 2
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;

        unordered_map<char, int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++; //set map values for all chars in t
        }

        for(auto i:t){
            if(m[i]!=0){ //reduce map values for chars in t
                m[i]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};