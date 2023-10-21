void alphaHill(int n) {
    char c;
    for(int i=1;i<=n;i++){
        c = 'A';
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int j=1;j<=i;j++){
            cout <<c<<" ";
            c++;
        }
        c--;
        for(int j=1;j<i;j++){
            c--;
            cout <<c<<" ";
        }
        cout<<endl;
    }
}
//pattern::
//     A
//   A B A
// A B C B A