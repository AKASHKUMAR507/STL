#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1 || n== 0) return n;

    return n * fact(n-1);
}

int main(){
    int N; cin>> N;
    while(N--){
        // int x,y,z;

        // cin>>x>>y>>z;
	    // if(((x<y)&&(y<z))||((z<y)&&(y<x)))
	    // {
	    // cout<<y<<"\n";
	    // continue;
	    // }
	    // if(((y<x)&&(x<z))||((z<x)&&(x<y)))
	    // {
	    // cout<<x<<"\n";
	    // continue;
	    // } 
	    // if(((x<z)&&(z<y))||((y<z)&&(z<x)))
	    // {
	    // cout<<z<<"\n";
	    // continue;
	    // }

        // int a,b,c; cin>>a>>b>>c;
        // if(((a<b) && (b<c)) || ((c<b) && (b<a))){
        //     cout<<b<<endl;
        // }else if( )

        int n; cin>>n;

        cout<<fact(n)<<endl;

// #include <iostream>
// using namespace std;
// int main(){
//     int n, a, b, c, i;
//     cin>>n;
//     for(i=0;i<n;i++){
//         cin>>a>>b>>c;
//         if((a>b && a<c) || (a<b && a>c)){
//             cout<<a<<endl;
//         }
//         else if((b>a && b<c) || (b<a && b>c)){
//             cout<<b<<endl;
//         }
//         else{
//             cout<<c<<endl;
//         }
//     }
//     return 0;
// }
// 
    // }
    return 0;
}