class Solution {
public:
    //RECURSION O(logN)
    int mod = 1e9+7;
    long long mypow(long long x, long long n){
        if(n==0) return 1;
    
        if(n%2==0){
            return mypow((x*x)%mod, n/2)%mod;
        }
        else{
            return x*mypow(x, n-1)%mod;
        }
    }

    int countGoodNumbers(long long n) {
        long long numevens = (n/2)+(n%2);
        long long numodds = (n/2);

        return (mypow(5, numevens) * mypow(4, numodds))%mod;

    }
};