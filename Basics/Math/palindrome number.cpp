int reversenum(int n){
    int digit, rev=0;
    while(n>0){
        digit = n%10; //unit digit
        rev = rev*10 + digit; //unit digit to prev num*10
        n /= 10;
    }
    return rev;
}

bool palindrome(int n){
    if(reversenum(n)==n) return true;
    return false;
}