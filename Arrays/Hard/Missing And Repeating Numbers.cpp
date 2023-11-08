
vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int xorr=0;
    for(int i=0;i<a.size();i++){
        xorr ^= a[i];
        xorr ^= (i+1);
    }

    int num = (xorr & ~(xorr-1));
    int zero=0, one=0;
    for(int i=0;i<a.size();i++){
        if((a[i] & num)!=0){
            one = one^a[i];
        }
        else{
            zero = zero^a[i];
        }
    }
    for(int i=1;i<=a.size();i++){
        if(i & num) one^=i;
        else zero^=i;
    }

    int count=0;
    for(auto i:a){
        if(one==i){
            count++;
        }
    }
    if(count==0) return {zero, one};
    else return {one, zero};
}