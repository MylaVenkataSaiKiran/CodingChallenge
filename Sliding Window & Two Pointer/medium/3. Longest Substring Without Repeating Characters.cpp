class Solution {
public:
    //Naive solution O(N^2)-time & O(N)-space
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int len = 0, maxlen = 0;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                if(m.find(s[j])!=m.end()){
                    len = m.size();
                    maxlen = max(maxlen, len);
                    m.clear();
                }
                m[s[j]]++;
            }
            len = m.size();
            maxlen = max(maxlen, len);
            m.clear();
        }

        return maxlen;
    }

    //Optimal solution O(N)-time O(N)-space
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int left = 0, right = 0, maxlen=0;
        for(; right<s.size(); right++){
            //if the char is already present
            if(m.find(s[right])!=m.end()){
                //till that char is reached again remove all char in the way
                while(left<right && m.find(s[right])!=m.end()){
                    auto it = m.find(s[left]);
                    m.erase(it);
                    left++;
                }
            }
            m[s[right]]++;
            maxlen = max(maxlen, right-left+1);
        }

        return maxlen;
    }
};