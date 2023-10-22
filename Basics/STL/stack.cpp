#include<stack>
#include<iostream>

using namespace std;

int main(){
    stack<int> s;

    for(int i=1;i<=10;i++){
        s.push(i);
    }

    cout<<"elements in the stack are: "<<endl;
    stack<int> s1 = s;
    for(int i=1;i<=10;i++){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;

    cout<<"the top element of stack is "<<s.top()<<endl;
    s.emplace(100);
    cout<<"the top element of stack is after inserting 100 is "<<s.top()<<endl;
    cout<<"size of stack is "<<s.size()<<endl;
    if(!s.empty()) cout<<"stack is not empty";
    return 0;
}