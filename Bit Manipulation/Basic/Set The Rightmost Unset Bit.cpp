//Time-O(1) Space-O(1)
int setBits(int N){
    //check if any unset bits
    if((N & N+1)==0) return N;
    //set the least significant bit
    return (N | N+1);
}

// int setBits(int N){
    int mask = 1;
    while(mask & N){
        mask = (mask << 1);
    }
    if(mask >= N) return N;
    N = (N | mask);
    return N;
}