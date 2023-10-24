void recursivefunc(int x, vector<int> &a){
    if(x>0){
        recursivefunc(x-1,a);
        a.push_back(x);
    }
}

vector<int> printNos(int x) {
    vector<int> a;
    recursivefunc(x,a);
    return a;
}