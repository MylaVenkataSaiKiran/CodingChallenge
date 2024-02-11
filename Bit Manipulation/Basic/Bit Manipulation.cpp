vector<int> bitManipulation(int num, int i){
    vector<int> ans;
    int temp = num;
    for(int j=1; j<i; j++){
        temp = temp/2;
    }
    ans.push_back(temp%2);
    if(ans[0]==1){
        ans.push_back(num);
        ans.push_back(num-pow(2,i-1));
    }
    else{
        ans.push_back(num+pow(2,i-1));
        ans.push_back(num);
    }

    return ans;
}