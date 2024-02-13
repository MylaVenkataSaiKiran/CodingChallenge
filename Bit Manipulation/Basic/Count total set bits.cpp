//OPTIMAL SOL - Bit Manipulation 
int countSetBits(int N){
    int d = 2, ans=0, x=N;
    while(x>0){
        ans += ((N+1)/d)*(d/2) + max(0, (N+1)%d-d/2);
        d *= 2;
        x /= 2;
    }

    return ans;
}

//Using builtin function
int countSetBits(int N)
{
    int ans=0;
    for(int i=1; i<=N; i++){
        ans += __builtin_popcount(i);
    }
    return ans;
}

//O(NlogN)-time
int countbits(int X){
    if(X <= 0) return 0;

    return (X%2==0 ? 0:1) + countbits(X/2);
}

int countSetBits(int N){
    int ans = 0;
    for(int i=1; i<=N; i++){
        ans += countbits(i);
    }
    return ans;
}