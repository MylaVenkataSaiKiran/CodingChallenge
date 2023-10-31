void removeduplicates(int &n, vector<int> &a){
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            a.erase(a.begin()+i);
            i--;
            n--;
        }
    }
}


vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n = a.size();
    int m = b.size();
    removeduplicates(n,a);
    removeduplicates(m,b);

    int i=0, j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i] > b[j]){
            ans.push_back(b[j]);
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    //for remaining elems
    for(;i<n;i++){
        ans.push_back(a[i]);
    }
    for(;j<m;j++){
        ans.push_back(b[j]);
    }

    return ans;
}