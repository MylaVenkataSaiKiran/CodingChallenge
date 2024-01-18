class Solution {
public:
    string calsum(string s){
        int sum=0;
        for(int i=0; i<s.size(); i++){
            sum += (s[i]-'0');
        }
        return to_string(sum);
    }
    
    string digitSum(string s, int k) {
        if(s.size() <= k) return s;
        string ans;
        int n = s.size()/k;
        int num;
        if(s.size()%k == 0) num = n;
        else num = n+1;
        int i;
        for(i=0; i<num-1; i++){
            string temp(s.begin()+i*k, s.begin()+(i*k+k));
            ans += calsum(temp);
        }
        string temp(s.begin()+i*k, s.end());
        ans += calsum(temp);
        return digitSum(ans, k);
    }
};