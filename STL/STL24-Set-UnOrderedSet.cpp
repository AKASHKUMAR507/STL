// //Set and Unordered set in c++
// // set store key

// #include <bits/stdc++.h>
// using namespace std;
// template <class T>
// void Print(set<T> &s)
// {
//     cout<<"Size "<<s.size()<<endl;
//     for (auto value : s)
//     {
//         cout << value << endl;
//     }
//     cout << endl;
//     // for(auto it = s.begin() ; it != s.end(); it++){
//     //     cout<<(*it)<<endl;
//     // }
// }
// int main()
// {
//     set<string> s;
//     s.insert("Akash"); // log(n)
//     s.insert("Kumar");
//     s.insert("Varsha");


//     auto it = s.find("Varsh"); /// log(n)
//     if (it != s.end())
//         cout << (*it) << endl;
//     else
//         cout << "No element" << endl;

    


//     Print(s);

//     return 0;
// }

// --------------------multi set--------------

#include <bits/stdc++.h>
using namespace std;
template<class T>
void display(multiset<T> &s){
    cout<<"Size "<<s.size()<<endl;
    for(auto value : s){
        cout<<value<<endl;
    } 
    cout<<endl;
}
int main(){
    multiset<string> s;
    s.insert("Akash"); // O(log(n))
    s.insert("Kumar");
    s.insert("Kumar");
    s.insert("Varsha");
    s.insert("Varsha");


    auto it = s.find("Varsha"); // O(log(n))
    if (it != s.end())
        cout << (*it) << endl;
    else
        cout << "No element" << endl;

    display(s);

    return 0;
}