long reverseBits(long n) {
    vector<long> v;
    while(n>0){
        v.push_back(n%2); //push digit
        n /= 2;
    }
    //v contains exactly from left to right digits as number

    long num=0;
    int len = v.size();
    for(int i=0;i<len;i++){
        if(v[i]) num += v[i]*pow(2,32-i-1); //if digit is 1 then calculate digit*2^()
    }

    return num;
}