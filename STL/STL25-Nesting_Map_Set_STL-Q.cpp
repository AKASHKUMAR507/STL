//input 
// 3
// Eve 78
// Bob 98
// Akic 78

//////
// 4
// Eve 78
// Bob 98
// Akic 78
// Akic 78

// output
// Bob 98
// Akic 78
// Eve 78
#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int , multiset<string>> marks_map;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[marks].insert(name);
    }
    auto curr_it = (--marks_map.end());
    while(true){
        auto &students = (*curr_it).second;
        int marks = (*curr_it).first;
        for(auto student : students){
            cout<<student<<" "<<marks<<endl;
        }
        if(curr_it == marks_map.begin()) break;
        curr_it--;

    }
    return 0;
}