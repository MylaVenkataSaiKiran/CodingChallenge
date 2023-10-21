void numberCrown(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        for(int j=1;j<=2*(n-i);j++) cout<<" ";
        for(int j=i;j>0;j--) cout<<j<<" ";
        cout<<endl;
    }
}
//pattern::
// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1