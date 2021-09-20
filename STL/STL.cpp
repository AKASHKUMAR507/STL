#include <iostream>
#include<array>
using namespace std;

int main(){
    // int basic[4] = {1,2,3,4};
    
    // for(int i = 0; i<4; i++){
    //     cout<<basic[i]<<" ";
    // }


    // int size = a.size();
    // cout<<size<<endl;
    
    

    array<int,4> a = {1,2,3,4};

    for(int i = 0; i<4; i++){
        cout<<a[i]<<" "<<endl;
    }

    cout<<"Element at 2nd Index "<<a.at(2)<<endl;
    cout<<"Empty or Not "<<a.empty()<<endl;

    cout<<"First Element "<<a.front()<<endl;
    cout<<"Last Element "<<a.back()<<endl;

    return 0;
}