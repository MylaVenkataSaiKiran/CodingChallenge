#include<bits/stdc++.h>

using namespace std;

int precedence(char c){
	if(c=='^') return 3;
	else if(c=='*' || c=='/') return 2;
	else if(c=='+' || c=='-') return 1;
	else return 0;
}

string infixToPostfix(string exp){
	string ans;
	stack<char> s;
	for(auto i:exp){
		if((i>='a' && i<='z') || (i>='A' && i<='Z') || (i>='0' && i<='9')){
			ans += i;
		}
		else if(i=='(') s.push(i);
		else if(i==')'){
			while(s.top()!='('){
				ans += s.top();
				s.pop();
			}
			s.pop();
		}
		else{//operator
			while(!s.empty() && precedence(i)<=precedence(s.top())){
				ans += s.top();
				s.pop();
			}
			s.push(i);
		}
	}

	//remaining elements
	while(!s.empty()){
		ans += s.top();
		s.pop();
	}

	cout << ans;
}

int main(){
    string exp = "3^(1+1)";
    infixToPostfix(exp);
    return 0;
}