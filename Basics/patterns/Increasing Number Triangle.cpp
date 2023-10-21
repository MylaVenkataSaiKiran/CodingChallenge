void nNumberTriangle(int n) {
    // Write your code here.
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum++;
            cout <<sum<<" ";
        }
        cout<<endl;
    }
}
//pattern::
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15