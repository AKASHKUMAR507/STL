#include <bits/stdc++.h>
using namespace std;
template<class T>
void display(vector<T> &v){
    cout<<"Size "<<v.size()<<endl;
    for(int i = 0; i<v.size(); i++){
        //v.size() -> T -> o(1)
        cout<<v[i]<<" ";
    }
    // v.push_back(2);
    cout<<endl;
}
int main(){
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i = 0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
        // display(v);
    // }
    // display(v);

    // --------------size fix---------
    vector<int> v(2 , 0);
    v.push_back(12);
    // v.pop_back();
    // //v.push_back & v.pop_back -> T -> o(1)
    // display(v);

    // -------------copy vector --------------
    vector<int> &v2 = v; // o(n)
    v2.push_back(17);
    // display(v);    
    // display(v);    
    // display(v2);   
    // ------------string input ---------------
    vector<string> s;
    int n; cin>>n;
    for(int i = 0; i<n ; i++){
        string ss;
        cin>>ss;
        s.push_back(ss);
    }
    display(s);




    return 0;
}
