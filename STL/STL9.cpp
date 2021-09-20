// STL compatitive programming in c++(STL is Heat of c++)
#include <bits/stdc++.h>
#include<chrono>
using namespace std;
auto start = chrono::steady_clock::now();

void display(vector<int> &v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> vec1;
    int element,size;
    cout<<"Enter size "<<endl;
    cin>>size;
    for(int i = 0; i<size; i++){
        cout<<"Enter an element in vector "<<endl;
        cin>>element;
        vec1.push_back(element);
    } 
    display(vec1);   
    

    auto end= chrono::steady_clock::now();
    auto diff = end - start;
    cout<<"compilation Time ";
    cout<<chrono::duration<double,milli>(diff).count()<<" ms"<<endl;
    return 0;
}