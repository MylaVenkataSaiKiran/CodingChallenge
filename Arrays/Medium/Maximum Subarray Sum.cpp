long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum=0, maxsum=0;
    for(auto i:arr){
        sum += i;
        if(sum<0) sum = 0;
        maxsum = max(maxsum, sum);
    }

    return maxsum;
}