class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int ans  = m[s.back()];
        for(int i=s.size()-2; i>=0; i--){ //iterate from right side of string 
            if(m[s[i]] < m[s[i+1]]){ //if curr val < right val
                ans -= m[s[i]];
            }
            else{ //curr val >= right val
                ans += m[s[i]]; 
            }
        }
        return ans;
    }
};