class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> m;//to store frequency of chars
        int left = 0, right = 0, maxfreq = 0, ans = 0;
        //left to right is a window
        for(; right<s.size(); right++){
            m[s[right]]++;

            maxfreq = max(maxfreq, m[s[right]]);

            //len of window - maxfreq > k ==> there are still some chars that cannot be changed
            if((right-left+1)-maxfreq > k){//it implies this window is not valid
                m[s[left]]--;
                left++;
            }
            else{
                ans = max(ans, right-left+1);
            }
        }

        return ans;
    }
};