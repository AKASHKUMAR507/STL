// inbuilt sorting in c++
/* introsort in c++(
    1 - Quick short 
    2 - Heap sort 
    3 - selection sort 
)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int a[n];
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }   
    // sort(a , a+n);
    sort(a.begin() , a.end()); // O(nlog(n))
    // reverse(a , a+n);
    // reverse(a.begin() , a.end());
    for(int i = 0; i<n; i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    // return 0;
}