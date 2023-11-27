class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.size() && s[i]==' '){ //STEP 1: Ignore leading white space
            i++;
        }

        char sign;
        if(i<s.size() && s[i]=='-' || s[i]=='+'){ //STEP 2: sign
            sign  = s[i++];
        }

        double ans = 0;
        while(i<s.size() && '0'<=s[i] && s[i] <= '9'){ //STEP 3 & 4: actual number
            ans = ans*10+ (s[i]-'0');
            i++;
        }

        if(sign=='-'){
            ans = 0-ans;
        }

        //STEP 5: out of bounds
        if(ans < INT_MIN){ 
            ans = INT_MIN;
        }
        else if(ans > INT_MAX){
            ans = INT_MAX;
        }
        
        return ans;
    }
};