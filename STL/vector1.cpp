#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    cout<<"capicity -> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capicity -> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capicity -> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capicity -> "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"capicity -> "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"capicity -> "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"capicity -> "<<v.capacity()<<endl;

    cout<<"Size-> " <<v.size()<<endl;
    cout<<"Element at 2nd "<<v.at(2)<<endl;
    cout<<"first "<<v.front()<<endl;
    cout<<"last "<<v.back()<<endl;

    cout<<"Before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Brefore clear soze "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear size "<<v.size()<<endl;


    return 0;
}