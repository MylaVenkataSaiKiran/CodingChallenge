
//OPTIMAL solution using two pointers (NOTE: will work only for positive nums)
int longestSubarrayWithSumK(vector<int> a, long long k){
    int right=0, left=0;
    long long sum=0;
    int maxlen = 0;
    while(right < a.size()){
        sum += a[right]; //add current elem to sum

        //whenever sum > k remove some elem form back using left pointer
        while(left<=right && sum>k){ 
            sum -= a[left];
            left++;
        }

        if(sum==k) maxlen = max(maxlen, right-left+1);

        right++;
    }

    return maxlen;
}



//BETTER Solution using Hashing (can be used for negative values as well)
int longestSubarrayWithSumK(vector<int> a, long long k){
    int maxlen = 0;
    long long prefixsum = 0;
    map<long long, int> m;

    for(int i=0;i<a.size();i++){
        prefixsum += a[i]; //cummulative sum
        if(prefixsum==k) maxlen = max(maxlen, i+1);

        //remaining subarray sum is prefixsum-k
        //find index where this sum occurs and subtract it from
        //current index this gives length
        if(m.find(prefixsum-k)!=m.end()){ 
            maxlen = max(i-m[prefixsum]+1, maxlen);
        }
        
        if(m.find(prefixsum)==m.end()){ //prefix sum is not present in map
            m.insert({prefixsum,i});
        }
    }

    return maxlen;
}