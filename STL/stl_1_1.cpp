#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    //make pair or data in pair
    p = make_pair(1, "akash");
    p = make_pair(2,"kuamr");
    //printing the pair
    // cout<<p.first<<" "<<p.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    //other way to make pair

    p = {2,"akash"};
    cout << p.first << " " << p.second << endl;

    //copy pair

    pair<int,string>&p1 = p;
    p1.first = 3;
    cout<<p1.first<<" "<<p1.second<<endl;

    // int a[] ={1,2,3};
    // int b[] = {4,5,6};
    
    //make pair of array
    pair<int,int>p_array[3];
    p_array[0] ={1,2};
    p_array[1] = {3,4};
    p_array[2] ={5,6};
    //print array
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    //swap array
    swap(p_array[0],p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    return 0;
}