class Solution {
public:
    //recursion 
    void findnum(string s, int i, double &ans){
        if(i < s.size()  && '0'<=s[i] && s[i]<='9'){
            ans = ans*10 + (s[i]-'0');
            findnum(s, i+1, ans);
        }
    }

    int myAtoi(string s){
        int i = 0;
        while(i<s.size() && s[i]==' '){
            i++;
        }

        char sign;
        if(i<s.size() && s[i]=='-' || s[i]=='+'){
            sign  = s[i++];
        }

        double ans = 0;
        findnum(s,i,ans);

        if(sign == '-'){
            ans = 0-ans;
        }

        if(ans > INT_MAX) ans = INT_MAX;
        else if(ans < INT_MIN) ans = INT_MIN;
        return ans;
    }
};