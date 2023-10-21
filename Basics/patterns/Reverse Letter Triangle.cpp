void nLetterTriangle(int n) {
    char c;
    for(int i=n;i>0;i--){
        c = 'A';
        for(int j=1;j<=i;j++){
            cout << c<<" ";
            c++;
        }
        cout<<endl;
    }
}
//pattern::
// A B C D E
// A B C D
// A B C
// A B
// A