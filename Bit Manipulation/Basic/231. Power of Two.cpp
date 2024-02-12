class Solution {
public:
    //Time - O(LogN) Space - O(1)
    bool isPowerOfTwo(int n) {
        if(n < 0) return false;
        int i=0;
        while(pow(2, i) < n) i++;
        return (pow(2, i)==n);        
    }

    //Bit Manipulation
    //Time-O(1) Space-O(1)
    bool isPowerOfTwo(int n){
        if(n<=0) return false;
        //7 -> 0111
        //8 -> 1000
        //bitwise AND of 7 and 8 -> 0000
        return ((n & n-1)==0);
    }
};