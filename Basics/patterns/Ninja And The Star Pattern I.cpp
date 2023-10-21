void getStarPattern(int n) {
    int t1=n,t2=n;
    while(t1--){
        cout<<"*";
    }
    cout<<endl;
    for(int i=2;i<=n-1;i++){
        cout<<"*";
        for(int j=1;j<=n-2;j++) cout<<" ";
        cout<<"*";
        cout<<endl;
    }
    if(n>1){
        while(t2--){
            cout<<"*";
        }   
    }

}
// pattern::
// *****
// *   *
// *   *
// *   *
// *****