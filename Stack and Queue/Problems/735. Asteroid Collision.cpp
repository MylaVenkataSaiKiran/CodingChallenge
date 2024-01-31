class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        vector<int> ans;

        for(int i=asteroids.size()-1; i>=0; i--){
            if(s.empty() || (asteroids[i] > 0 && s.top() > 0) || (asteroids[i] < 0)){
                s.push(asteroids[i]);
            }
            else{
                if(asteroids[i] == abs(s.top())) s.pop();
                else if(asteroids[i] > abs(s.top())){
                    s.pop();
                    if(s.empty() || s.top()>0) s.push(asteroids[i]);
                    else i++;
                }
            }
        }

        //copy final stack elems to ans vector
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }
};