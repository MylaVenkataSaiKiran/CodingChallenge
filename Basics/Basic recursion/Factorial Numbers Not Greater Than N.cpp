void recurfunc(long long x, vector<long long> &a, long long n){
    x++;  //next num
    if(x*a.back()>n) return; // factorial check < n
    a.push_back(a.back()*x); // if yes push that num
    recurfunc(x, a, n); 
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> a;
    if(n>1) a.push_back(1);
    recurfunc(1,a,n); //starting from 1
    return a;
}