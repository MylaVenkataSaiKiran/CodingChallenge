vector<int> superiorElements(vector<int>&a) {
    int n = a.size();
    int maxele = a[n-1];
    vector<int> ans(1, maxele);

    for(int i=n-1; i>=0; i--){
        if(a[i]>maxele){
            ans.push_back(a[i]);
            maxele = a[i];
        }
    }

    return ans;
}