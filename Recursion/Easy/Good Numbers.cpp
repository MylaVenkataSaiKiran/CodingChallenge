bool checkgood(int a, int digit, int sum){
    if(a == 0) return true;
    int rdigit = a%10;
    if(rdigit == digit) return false;
    if(rdigit > sum){
        return checkgood(a/10, digit, sum + rdigit);
    }
    return false;
}

void findgoodnums(vector<int> &ans, int a, int b, int digit){
    int rightmostdigit = a%10;
    if(checkgood(a/10, digit, rightmostdigit) && rightmostdigit != digit){
        ans.push_back(a);
    }
    if(a < b) findgoodnums(ans, a+1, b, digit);
}

vector<int> goodNumbers(int a, int b, int digit) {
	vector<int> ans;
    findgoodnums(ans, a, b, digit);
    return ans;
}