//Map in c++ (map store key value pair)
#include <bits/stdc++.h>
using namespace std;
// template<class T1 , class T2>
// void display(map<T1 , T2>:: marks){
//     map<string , int> :: iterator it;
//     for(it = marks.begin(); it != marks.end(); it++){
//         cout<<(*it).first<<" "<<(*it).second<<"\n";
//     }
// }
int main(){
    map<string,int> marks;
    // marks["Aaksh"] = 99;
    // marks["Varsha"] = 90;
    // marks["Sumit"] = 88;
    
    marks.insert(
        {{"Akash" , 99},
        {"Varsha" , 80},
        {"Sumit" , 89}}
    );

    // ---------direct call functions -------------
    map<string , int> :: iterator it;
    for(it = marks.begin(); it != marks.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }

    cout<<"The size is "<<marks.size()<<endl;
    cout<<"The max_size is "<<marks.max_size()<<endl;
    cout<<"The empty is "<<marks.empty()<<endl;

    // -----------function------------
   



    return 0;
}