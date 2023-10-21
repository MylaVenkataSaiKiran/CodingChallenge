void nBinaryTriangle(int n) {
    // Write your code here.
    bool flag = 1,temp;
    for(int i=1;i<=n;i++){
        temp = flag;
        for(int j=1;j<=i;j++){
            cout <<temp<<" ";
            temp = !temp;
        }
        flag = !flag;
        cout<<endl;
    }
}
//pattern::
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1