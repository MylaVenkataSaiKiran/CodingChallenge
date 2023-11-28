int countSubStrings(string str, int k) 
{
    string temp;
    int ans = 0, distinct_cnt;
    unordered_map<char, int> m;
    for(int i=0;i<str.size();i++){
        distinct_cnt=0;
        for(int j=i; j<str.size(); j++){
            if(m[str[j]]==0){
                distinct_cnt++;
            }
            m[str[j]]++;
            if(distinct_cnt==k){
                ans++;
            }
        }
        m.clear();
    }
    return ans;
}
