#include <bits/stdc++.h>
using namespace std;
template<class T , class T1>
void excha(T &a , T1 &b){
    T temp = a;
    a = b;
    b = temp;
    
}
int main(){
    // int a , b;
    // cout<<"Enter the value of a and B "<<endl;
    // cin>>a>>b;
    // excha(a,b);
    // cout<<a<<" "<<b<<endl;

    // cout<<endl;

    // float a , b;
    // cout<<"Enter the value of a and B "<<endl;
    // cin>>a>>b;
    // excha(a,b);
    // cout<<a<<" "<<b<<endl;

    cout<<endl;

    float a ;int b;
    cout<<"Enter the value of a and B "<<endl;
    cin>>a;
    cin>>b;
    excha(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}