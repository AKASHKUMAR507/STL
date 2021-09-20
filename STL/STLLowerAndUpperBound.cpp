// //data should be shorted 
// // then time compalexty Olong(n)
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     sort(arr, arr + n);

//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int f; cin>>f;
//     // -------------------------
//     int *pt = lower_bound(arr , arr + n , f);
//     if(pt == (arr+ n)){
//         cout<<"Not Found";
//         return 0;
//     }
//     cout<<(*pt)<<endl;
//     // -----------------------------
//     // int *ptr =upper_bound(arr , arr+n , f);
//     // if(ptr == (arr+ n)){
//     //     cout<<"Not Found";
//     //     return 0;
//     // }
//     // cout<<(*ptr)<<endl;



//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin>>n;
//     vector<int> a(n);

//     for(int i = 0; i<n; i++){
//         cin>>a[i];
//     }
//     sort(a.begin() , a.end());

//     for(int i = 0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     int f; cin>>f;
//     // auto it = lower_bound(a.begin() , a.end() , f);
//     // if(it == a.end()){
//     //     cout<<"Not Found"<<endl;
//     //     return 0;
//     // }
//     // cout<<(*it)<<endl;
//     // -------------------
//     auto it = upper_bound(a.begin() , a.end() , f);
//     if(it == a.end()){
//         cout<<"Not Found"<<endl;
//         return 0;
//     }
//     cout<<(*it)<<endl;
//     return 0;
// }



// ------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n; 
    // cin>>n;
    // set<int> s;
    // for(int i = 0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     s.insert(x);
    // }

    // auto it = lower_bound(s.begin() , s.end() , 4);
    // cout<<(*it)<<endl;

    // --------------------------------------

    int n;
    cin>>n;
    set<int> s;

    for(int i = 0; i<int(1e6); i++){
        s.insert(rand());
    }
    for(int i = 0; i<(int)1e5; i++){
        auto it = s.lower_bound(rand());
        
    }
   



    return 0;
}