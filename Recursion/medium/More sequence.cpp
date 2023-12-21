//O(N+M)
void findallsubseq(unordered_map<char, int> &mp, int N, string s, int i, int &count){
    if(i == N){
        return;
    }

    if(mp.find(s[i])==mp.end()){
        mp[s[i]] = count;
        count *= 2;
    }
    else{
        int temp = mp[s[i]];
        mp[s[i]] = count;
        count *= 2;
        count -= temp;
    }
    findallsubseq(mp, N, s, i+1, count);
}

string moreSubsequence(int n, int m, string a, string b)
{
    unordered_map<char, int> mp;
    int c1 = 1, c2 = 1;
    findallsubseq(mp, n, a, 0, c1);
    mp.clear();
    findallsubseq(mp, m, b, 0, c2);

    if(c1 >= c2) return a;
    return b;
}