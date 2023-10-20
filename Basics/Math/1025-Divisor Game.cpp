class Solution {
public:
    bool divisorGame(int n) {
        bool count = false;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                n -= i;
                i=0;
                if(count) count=false;
                else count = true;
            }
        }
        return count;
    }
};