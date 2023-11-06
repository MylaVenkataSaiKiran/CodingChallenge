int Solution::solve(vector<int> &A, int B) {
    int count=0, xorr=0;
    unordered_map<int,int> m;
    m[0]=1;
    for(auto i:A){
        xorr ^= i;
        count += m[xorr^B];
        m[xorr]++;
    }
    return count;
}
