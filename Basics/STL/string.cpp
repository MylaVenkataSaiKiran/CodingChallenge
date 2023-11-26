#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "abs";
    s.insert(1, "ddd");
    s.push_back('f');
    cout<<"first char is: "<<s.front()<<endl;
    cout<<"last char is: "<<s.back()<<endl;

    for(string::size_type i=0;i<s.size();i++){ //will not give error for size or length
        cout<<s[i];
    }
    cout<<endl;

    //replace
    s.replace(1,5,"ccc");

    //append s1 to s
    string s1 = "ggggg";
    s.append(s1);
    for(string::size_type i=0;i<s.length();i++){ //both will work
        cout<<s[i];
    }
    cout<<endl;

    if(s.find('x')!=string::npos){ //finding strings or chars
        cout<<"char a is present"<<endl;
    }
    else cout<<"not found"<<endl;

    cout <<"index of matched ggg in s is: "<< s.find("ggg")<<endl;

    swap(s1,s); //swapping
    cout<<"string s after swaping with s1: "<<s<<endl;

    if(s.compare(s1)==0) cout<<"both are equal"<<endl; //comparision of strings
    else if(s.compare(s1) > 0) cout<<"s1 is lexicographically greater than s"<<endl;
    else cout<<"both are not same";


    s.clear();
    cout<<"cleared all characters of s"<<endl;
    if(s.empty()) cout<<"string is empty"<<endl;
    return 0;
}