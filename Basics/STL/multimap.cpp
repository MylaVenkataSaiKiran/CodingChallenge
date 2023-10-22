#include<iostream>
#include<map>

using namespace std;

int main(){
    multimap<int,int> m;
    for(int i=10;i>0;i--){
        m.insert(make_pair(i,i*10));
    }
    m.insert({3,90});
    m.insert({3,30});
    m.insert({3,60});


    cout<<"elements in the container are :"<<endl;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"size of container is "<<m.size()<<endl;
    
    auto it = m.find(4);
    m.erase(it);
    cout<<"deleted 4"<<endl;
    if(m.count(4)==1) cout<<"4 is present in container"<<endl;
    else cout<<"4 is not present in the container"<<endl;

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<"size of container is "<<m.size()<<endl;
    m.clear();
    cout<<"deleted all elements"<<endl;
    if(m.empty()) cout<<"Empty!!";
    else cout<<"Not Empty";

    return 0;
}