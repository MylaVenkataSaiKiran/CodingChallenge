//time - O(N) space - O(N)
int findMaxFruits(vector<int> &arr, int n) {

    int first=-1, second=-1;
    int fc = 0, sc = 0;
    int maxfruits=0;
    for(int i=0; i<arr.size(); i++){
        if(first==-1) first = arr[i];
        if(arr[i]!=first && second==-1) second = arr[i];
        if(arr[i]!=first && arr[i]!=second){
            first = second;
            fc = sc;
            second = arr[i];
            sc = 0;
        }

        if(arr[i]==first) fc++;
        else if(arr[i]==second) sc++;

        maxfruits = max(maxfruits, fc+sc);
    }
    return maxfruits;
}