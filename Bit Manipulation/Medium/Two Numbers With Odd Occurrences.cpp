//O(N)-time and O(1)-Space
vector<int> twoOddNum(vector<int> arr){
    int xorr=0;
    for(int i=0; i<arr.size(); i++){
        xorr ^= arr[i];
    }

    int setBit = (xorr & ~(xorr-1)); //rightmost set bit

    int xorr1 = 0, xorr2 = 0;
    //divide numbers into two groups based on bit set or not at setBit pos.
    for(auto i:arr){
        if((i&setBit)!=0){
            xorr1 ^= i;
        }
        else{
            xorr2 ^= i;
        }
    }

    vector<int> ans;
    if(xorr1 > xorr2){
        ans.push_back(xorr1);
        ans.push_back(xorr2);
    }
    else{
        ans.push_back(xorr2);
        ans.push_back(xorr1);
    }

    return ans;
}