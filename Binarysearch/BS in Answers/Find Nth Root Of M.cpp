int NthRoot(int n, int m) {

    if(n==0 || n==1) return n;
    int l=1, h = m;

    while(l<=h){
      long double mid = (l+h)/2;
      long double nthpow = pow(mid, n);
      if(nthpow == (long double)m){
        return mid;
      }
      else if(nthpow < m){
        l = mid+1;
      }
      else{
        h = mid-1;
      }
    }

    return -1;
}