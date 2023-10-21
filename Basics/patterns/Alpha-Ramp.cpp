void alphaRamp(int n) {
    char c='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
}
//pattern::
// A
// B B
// C C C
// D D D D