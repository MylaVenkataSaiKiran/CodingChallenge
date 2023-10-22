#include<queue>
#include<iostream>

using namespace std;

int main(){
    queue<int> q;
    for(int i=1;i<11;i++){
        q.push(i);
    }

    cout<<"elements of queue are: "<<endl;
    queue<int> q1 = q;
    while(!q1.empty()){
        cout <<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    cout<<"first element of queue is "<<q.front()<<endl;
    cout<<"last element of queue is "<< q.back()<<endl;
    cout<<"size of queue is "<<q.size()<<endl;

    q.emplace(33);
    cout<<"inserted 33"<<endl<<"size of queue is "<<q.size()<<endl;
    if(!q.empty()){
        cout<<"queue is not empty";
    }
    return 0;
}