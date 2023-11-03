vector<int> nextGreaterPermutation(vector<int> &A) {
    int n = A.size();
    int index = -1;
    for(int i=n-2;i>=0;i--){
        if(A[i] < A[i+1]){
            index  = i;
            break;
        }
    }
    if(index==-1){
        reverse(A.begin(),A.end());
    }
    else{
        for(int j=n-1; j>index; j--){
            if(A[j]>A[index]){
                swap(A[j], A[index]);
                break;
            }
        }
        reverse(A.begin()+index+1, A.end());
    }
    return A;
}