//O(N)-time 
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


//BIT MANIPULATION
//O(1)-Time
vector<int> bitManipulation(int num, int i){
    vector<int>  ans;
    int bit=0, set=0, clear=0;

    //set 1 at i-th bit and 0s in other places
    int mask = (1<<(i-1));//will push 1 i-1 times

    if(num & mask){
        bit=1;
    }

    set = (num | mask);
    clear = (num & (~mask));//as mask will have 0s other than i-th bit
    ans.push_back(bit);
    ans.push_back(set);
    ans.push_back(clear);
    return ans;
}