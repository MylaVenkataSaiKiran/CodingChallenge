    //RECURSION O(logN)
    double myPow(double x, int n){
        if(n == 0) return 1;
        if(n < 0){
            n = abs(n);
            x = 1/x; //making x itself inverse
        }
        if(n%2==0){//even, then can be divided into equal halves
            return myPow(x*x, n/2);
        }
        else{
            return x*myPow(x, n-1);
        }
    }