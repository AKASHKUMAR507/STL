// #include <bits/stdc++.h>
// using namespace std;
// template <class T1, class T2>

// void printVec(vector<pair<T1 , T2>> &v)
// {
//     cout << "Size " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i].first << " " << v[i].second << endl;

//     }
//     cout << endl;
// }
// int main(){
//     vector<pair<int, int>> v_pair; // = { {1,4},{2,3},{3, 2},{4, 1},};
//     printVec(v_pair);
//     int n; cin>>n;
//     for(int i = 0; i<n; i++){
//         int x , y ; cin>>x>>y;
//         v_pair.push_back({x,y});
//     }
//     printVec(v_pair);

// return 0;
// }

//    ------------- Array of vector ---------
// #include <bits/stdc++.h>
// using namespace std;
// template<class T>
// void printVec(vector<T> &v){
//     cout<<"Size "<<v.size()<<endl;
//     for(int i = 0; i<v.size(); i++){
//         cout<<v[i]<<" ";

//     }
//     cout<<endl;
// }
// int main(){
//      int N;cin>>N;
//     vector<int> v[N];
//     for(int i = 0; i<N; i++){
//         int n;
//         cin>>n;
//         for(int j = 0; j<n; j++){
//             int x;
//             cin>>x;
//             v[i].push_back(x);
//         }
//     }
//     for(int i = 0; i<N; i++){
//         printVec(v[i]);
//     }
//     return 0;
// }

// ------------vector of vector -----------
#include <bits/stdc++.h>
using namespace std;
template <class T>
void printVec(vector<T> &v)
{
    cout << "Size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);

    }
    v.push_back(vector<int>());
    v[0].push_back(10);
    v.push_back(vector<int>(3,5));
    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }
    // cout<<v[0][1];
    return 0;
}