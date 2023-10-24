void recurfunc(bool &flag, int i, string &str){
    if(i < str.length()/2){
        if(str[i]!=str[str.length()-1-i]){
            flag = false;
        }
        else{
            recurfunc(flag, i+1,str);
        }
    }
}


bool isPalindrome(string& str) {
    bool flag=true;
    recurfunc(flag, 0, str);
    return flag;
}
