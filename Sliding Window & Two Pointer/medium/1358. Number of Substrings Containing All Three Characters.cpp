class Solution {
public:
    //Naive solution O(N)-time O(1)-space
    int numberOfSubstrings(string s) {
        int cnt=0, ans=0;
        unordered_map<char, int> m;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                m[s[j]]++;//increase freq of that char

                if(m['a']>0 && m['b']>0 && m['c']>0){
                    ans += (s.size()-j);
                    break;
                }
            }
            m.clear();
        }
        return ans;
    }

    //Sliding window
    //Time-O(N) & Space-O(N)
    int numberOfSubstrings(string s){
        int left=0, right=0, ans=0, cnt=0;
        unordered_map<char, int> m;
        for(; right<s.size(); right++){
            m[s[right]]++;
            //if window is good, then remove left chars
            while(m['a']>0 && m['b']>0 && m['c']>0 && left<s.size()){
                ans += s.size()-right;//keep counting subarrays
                m[s[left]]--;
                left++;
            }
        }

        return ans;
    }
};