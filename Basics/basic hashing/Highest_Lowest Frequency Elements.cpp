vector<int> getFrequencies(vector<int>& v) {
    unordered_map<int,int> m;
    for(auto i:v){
        m[i]++;
    }

    vector<int> a(4);
    auto it=m.begin();
    a[0] = it->second;
    a[1] = it->second;
    a[2] = it->first;
    a[3] = it->first;

    for(auto it=m.begin(); it!=m.end(); it++){

        if(it->second > a[0]){
            a[0] = it->second;
            a[2] = it->first;
        }
        else if(it->second==a[0]){
            if(a[2] > it->first) a[2]=it->first;
        }

        if(it->second < a[1]){
            a[1] = it->second;
            a[3] = it->first;
        }
        else if(it->second==a[1]){
            if(a[3] > it->first) a[3]=it->first;
        }
    }

    a.erase(a.begin(),a.begin()+2);
    return a;
}