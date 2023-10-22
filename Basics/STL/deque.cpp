#include<deque>
#include<iostream>

using namespace std;

int main(){
    deque<int> d;

    for(int i=1;i<=10;i++){
        d.push_back(i);
    }

    cout<<"elements in the deque are: "<<endl;
    deque<int> d1(d);
    while(!d1.empty()){
        cout<<d1.front()<<" ";
        d1.pop_front();
    }
    cout<<endl;

    cout<<"first element of container is: "<<d.front()<<endl;
    cout<<"last element of container is: "<<d.back()<<endl;
    d.pop_front();
    d.push_front(200);
    d.pop_back();

    cout<<"first element of container is: "<<d.front()<<endl;
    cout<<"last element of container is: "<<d.back()<<endl;

    cout<<"size of container is "<<d.size()<<endl;
    if(!d.empty()) cout<<"deque is not empty";
    return 0;
}