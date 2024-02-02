class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s; //to contains digits in increasing order from left to right in string
        string ans;
        int n = num.size();
        if(n <= k) return "0";
        if(k==0) return num;

        for(int i=0; i<n; i++){
            while(!s.empty() && k>0 && num[i]<s.top()){ //if this digit is smaller than prev digit
                s.pop(); //then pop
                k--; //k will ensure that not more than k digits are removed
            }
            s.push(num[i]);
            if(s.size()==1 && s.top()=='0') s.pop();
        }

        //if k!=0, some more digits are to be removed
        //eg 123789, k=2
        while(k>0 && !s.empty()){
            s.pop();
            k--;
        }

        //string ans
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());

        if(ans.size()==0) return "0";
        return ans;
    }
};