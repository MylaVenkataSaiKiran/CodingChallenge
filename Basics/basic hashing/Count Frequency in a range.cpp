vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> a(n+1,0);
    for(auto i : nums){
        a[i]++;
    }    
    a.erase(a.begin()); //first elem is 0, but we need from 1
    return a;
}