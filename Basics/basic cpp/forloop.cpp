#include<bits/stdc++.h>
using namespace std;
//finding nth fibonacci number
int main(){
    int n;
    cin >> n;
    if(n==1 || n==2) cout<< 1;
    else{
        vector<int> arr(2,1); //initial first two nums = 1
        int i;
        for(i=2;i<n;i++){ //start from n=3 i.e i=2
            arr.push_back(arr[i-1]+arr[i-2]);
        }
        cout<<arr[i-1];
    }
    return 0;
}