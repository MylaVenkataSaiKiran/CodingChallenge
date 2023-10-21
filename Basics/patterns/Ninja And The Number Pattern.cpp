void getNumberPattern(int n) {
    int a;
    for(int i=1;i<n;i++){
        a = n;
        for(int j=1;j<=i;j++){
            cout<<a;
            a--;
        }
        a++;
        for(int j=1;j<=2*(n-i)-1;j++) cout<<a;
        for(int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    a=n;
    for(int i=0;i<n;i++){
        cout<<a;
        a--;
    }
    a++;
    for(int i=0;i<n-1;i++){
        a++;
        cout<<a;
    }
    cout<<endl;

    for(int i=n-1;i>0;i--){
        a = n;
        for(int j=1;j<=i;j++){
            cout<<a;
            a--;
        }
        a++;
        for(int j=1;j<=2*(n-i)-1;j++) cout<<a;
        for(int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}
// pattern::
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444