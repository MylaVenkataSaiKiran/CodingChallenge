vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int>  s;
    vector<int> ans;
    
    for(auto i:A){
        while(!s.empty() && s.top()>=i){
            s.pop();
        }
        
        if(s.empty()) ans.push_back(-1);
        else ans.push_back(s.top());
        
        s.push(i);
    }
    
    return ans;
}
