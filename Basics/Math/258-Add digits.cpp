class Solution {
public:
    int addDigits(int num) {
        if((num/10)==0) return num; //if single digit then return

        int sum=0;
        while(num>0){
            sum += num%10; //unit digit
            num /= 10; //left digits
        }

        return addDigits(sum); //returns single digit

        //one line solution is::
        // return (1+(num-1)%9);
    }
};