class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        int j=n-1;
        while(j>=0){
            if(digits[j]==9){ // if the digit is 9, then change it to 0
                digits[j]=0;
                if(j==0){ // if the first digit is 9, then we need to add a new digit
                    digits.insert(digits.begin(),1);
                    return digits;
                }
                else{ // if the digit is not the first digit, then go to the previous digit
                    j--;
                }
            }
            else{ // if the digit is not 9, then add 1 to it
                digits[j]++;
                return digits;
            }
        }
        return digits;
    }
};