//OPTIMAL Solution O(N)-time O(1)-space
int bestTimeToBuyAndSellStock(vector<int>&prices){
    int minval=INT_MAX;
    int profit, maxprofit=INT_MIN;
    for(auto i:prices){
        minval = min(i,minval);
        profit = i-minval;
        maxprofit = max(maxprofit, profit);
    }
    return maxprofit;
}

// O(N)-time O(N)-space
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    vector<int> diff;
    for(int i=0;i<prices.size()-1;i++){
        diff.push_back(prices[i+1]-prices[i]);
    }

    //find max sum of subarray of diff array
    int sum=0, maxprofit=0;
    for(auto i:diff){
        sum+=i;
        if(sum<0) sum=0;
        maxprofit = max(maxprofit, sum);
    }

    return maxprofit;
}
