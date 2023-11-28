int floorSqrt(int n)
{
    if(n==0 || n==1) return n;
    int l=0, h=n;

    while(l<=h){
        long long mid = (l+h)/2;

        long long square = pow(mid,2);
        if(square == (long long)n){
            return mid;
        }
        else if(square < n){ //req sqrt is on left
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }

    return h; //floor val
}
