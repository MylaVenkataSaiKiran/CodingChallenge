void recurfunc(int x, vector<int> &a){
    if(x>0){
        a.push_back(x);
        recurfunc(x-1,a);
    }
}

vector<int> printNos(int x) {
    vector<int> a;
    recurfunc(x,a);
    return a;
}