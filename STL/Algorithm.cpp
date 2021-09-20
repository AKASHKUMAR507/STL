// #include <iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main(){
    // vector<int>v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    // cout<<"Binary Search "<<binary_search(v.begin() ,v.end(),4)<<endl;

    // cout<<"lower Bound "<<lower_bound(v.begin(),v.end() , 5)-v.begin()<<endl;
    // cout<<"upper Bound "<<upper_bound(v.begin(),v.end() , 5)-v.begin()<<endl;

//     int a = 2;
//     int b = 3;
//     cout<<"max -> "<<max(a,b)<<endl;
//     cout<<"min-> "<<min(a,b)<<endl;
//     swap(a,b);
//     cout<<"swap -> "<<a<<endl;

//     string s = "abcd"; 
//     reverse(s.begin(),s.end());
//     cout<<"string -> "<<s<<endl;

    


//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {23,43,12,43,76,34,23,97,56,34,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i = 0 ; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int item:arr){
        cout<<item<<endl;
    }

    return 0;
}