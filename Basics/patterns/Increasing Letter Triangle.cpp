void nLetterTriangle(int n) {
    char c;
    for(int i=0;i<n;i++){
        c = 'A';
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        cout << endl;
    }
}
//pattern::
// A
// A B
// A B C
// A B C D