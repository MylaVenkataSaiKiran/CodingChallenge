vector<int> countGreater(vector<int>&arr, vector<int>&query) {
    vector<int> ans;
    int count;
    for(auto index : query){
        count=0;
        for(int i=index+1; i<arr.size(); i++){
            if(arr[index] < arr[i]) count++;
        }
        ans.push_back(count);
    }

    return ans;
}