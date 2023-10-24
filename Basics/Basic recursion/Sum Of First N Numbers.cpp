void recurfunc(long long x, long long &sum){
    if(x>0){
        sum += x;
        recurfunc(x-1,sum);
    }
}

long long sumFirstN(long long n) {
    long long sum = 0;
    recurfunc(n,sum);
    return sum;
}