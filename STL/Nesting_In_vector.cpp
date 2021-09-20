#include <bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int>> v)
{
    cout << "size : " << v.size() << endl;

    for (int i = 0; i < v.size(); ++i)
    {
        //v.size() -> O(1)
        cout << v[i].first << " "<<v[i].second<<endl;
    }
    cout << endl;
}



void printVec1(vector<int> v1)
{
    cout << "size : " << v1.size() << endl;

    for (int i = 0; i < v1.size(); ++i)
    {
        //v.size() -> O(1)
        cout << v1[i]<<" ";
    }
    cout << endl;
}


int main(){

    // // vector<pair<int,int>>v = {{1,2},{3,4},{5,6}};
    // // printVec(v);

    // vector<pair<int,int>>v ;//= {{1,2},{3,4},{5,6}};
    // printVec(v);
    // int n;
    // cin>>n;

    // for (int i = 0; i <n; ++i)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y});
    // }
    // printVec(v);



    int N;
    cin>>N;

    // string a => "Akash Kumar";

    vector<int>v[N];
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
        printVec1(v[i]);
    }

    return 0;
}