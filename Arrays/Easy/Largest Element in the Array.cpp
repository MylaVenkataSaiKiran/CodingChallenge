#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int maxele = arr[0];
    for(auto i:arr){
        maxele = max(maxele, i);
    }
    return maxele;
}
