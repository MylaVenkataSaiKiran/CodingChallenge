#include<list>
#include<iostream>

using namespace std;

void printlist(list<int> l){
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> l;
    for(int i=1;i<5;i++){
        l.push_back(i);
    }

    for(int i=1;i<5;i++){
        l.push_front(i*10);
    }

    printlist(l);

    cout<<"reverse the list"<<endl;
    l.reverse();
    printlist(l);

    cout<<"sort the list"<<endl;
    l.sort();
    printlist(l);

    cout<<"first element of the list is "<<l.front()<<endl;
    l.pop_front();
    cout<<"poped first element"<<endl;
    cout<<"first element of the list is "<<l.front()<<endl;

    cout<<"size of list is "<<l.size()<<endl;

    cout<<"last element of the list is "<<l.back()<<endl;
    l.pop_back();
    cout<<"last element of the list is "<<l.back()<<endl;

    if(!l.empty()) cout<<"list is not empty";
    return 0;
}