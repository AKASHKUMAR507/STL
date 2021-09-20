#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int>v){
    cout<<"size : "<<v.size()<<endl;

    for(int i=0;i<v.size();++i){
        //v.size() -> O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void printVec(vector<string>s){
    cout<<"size : "<<s.size()<<endl;

    for(int i=0;i<s.size();++i){
        //v.size() -> O(1)
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
int main(){

    // vector<int>v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     printVec(v);
    //     v.push_back(x);
    // }
    // printVec(v);


    vector<int>v(10);
    //push_back add element to the last
    //and time complexity of push_back and pop_back both are same ie O(1)
    // v.push_back(12);
    // v.push_back(12);
    // v.push_back(12);
    // v.size();
    // printVec(v);

    //pop_back remove element from the last
    //and time complexity of push_back and pop_back both are same ie O(1)
    // v.pop_back();
    // v.pop_back();
    // printVec(v);

    // vector<int>v2=v; // O(n)
    // v2.push_back(5);
    // printVec(v);
    // printVec(v2);


    vector<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s1;
        cin>>s1;
        s.push_back(s1);
    }
    printVec(s);



    return 0;
}