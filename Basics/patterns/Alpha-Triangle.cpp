void alphaTriangle(int n) {
    char c;
    for(int i=1;i<=n;i++){
        c = 'A'+n-1;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c--;
        }
        cout<<endl;
    }
}
//pattern::
// D
// D C
// D C B
// D C B A