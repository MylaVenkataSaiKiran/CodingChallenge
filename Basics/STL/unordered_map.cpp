#include<unordered_map>
#include<iostream>

using namespace std;

int main(){
    unordered_map<int,int> m;
    for(int i=1;i<=20;i++){
        m.insert({i,i*100});
    }

    m.insert({2,2*100});
    m.insert({2,3*100});

    cout<<"The elements in the container are :"<<endl;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"count of key=2 is: "<<m.count(2)<<endl;
    auto it = m.find(2);
    m.erase(it);

    cout<<"removed 2 from container";

    cout<<"The size of the container is: "<<m.size()<<endl;
    m.clear();
    cout<<"deleted all elemnets";
    if(m.empty()) cout<<"containe is empty";

    return 0;
}