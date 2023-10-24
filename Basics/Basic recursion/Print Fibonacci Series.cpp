void recurfunc(vector<int> &a, int n){
    if(a.size()<n){
        a.push_back(a.back()+*(a.end()-2));
        recurfunc(a,n);
    }
}

vector<int> generateFibonacciNumbers(int n) {
    vector<int> a;
    if(n==1) a.push_back(0);
    if(n>1){
        a.push_back(0);
        a.push_back(1);
    }
    recurfunc(a,n);
    return a;
}