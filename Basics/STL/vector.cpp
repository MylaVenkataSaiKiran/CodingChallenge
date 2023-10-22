#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a;

    for(int i=1;i<=10;i++){
        a.push_back(i);
    }

    cout<<"The "<<a.size()<<" elements present in the vector are: "<<endl;
    for(auto it=a.begin();it!=a.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;

    a.pop_back();
    cout<<"Removed the last element"<<endl;

    a.erase(a.begin());
    cout<<"Erased first element"<<endl;

    cout<<"Now the first element is "<<a.front();
    cout<<" and the last element is "<<a.back()<<endl;

    a.insert(a.begin()+3,100);
    cout<<"Inserted 100 in 4th place"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    a.clear();
    cout<<"deleted all elements"<<endl;
    cout<<"The size of the vector is "<<a.size();

    if(a.empty()) cout<<"(Empty!!)";
    return 0;
}