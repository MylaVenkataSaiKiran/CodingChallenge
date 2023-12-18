void findstrings(vector<string> &ans, string s, int N){
    if(s.size() == N){
        ans.push_back(s);
    }
    else{
        if(s.back() == '0'){
            s.push_back('0');
            findstrings(ans, s, N);
            s.pop_back();

            s.push_back('1'); 
            findstrings(ans, s, N);
            s.pop_back();
        }
        else{
            s.push_back('0');
            findstrings(ans, s, N);
            s.pop_back();
        }

    }
}

vector<string> generateString(int N) {

    vector<string> ans;
    findstrings(ans, "0", N);
    findstrings(ans, "1", N);
    return ans;
}