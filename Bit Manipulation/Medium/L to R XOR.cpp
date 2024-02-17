// O(1)-TIME O(1)-SPACE
int xorfunc(int N){
    switch(N%4){
        case 0:
            return N;
        case 1:
            return 1;
        case 2:
            return N+1;
        case 3:
            return 0;
    }
    return -1;
}

int findXOR(int L, int R){
    int x = xorfunc(L-1);//xor from 0 to L-1
    int y = xorfunc(R);//xor from 0 to R
    return x^y; //xor from 0 to L-1 is common, so it gives xor from L to R
}

//O(N)-time O(1)-Space
int findXOR(int L, int R){
    int ans=0;
    for(int i=L; i<=R; i++){
        ans ^= i;
    }
    return ans;
}