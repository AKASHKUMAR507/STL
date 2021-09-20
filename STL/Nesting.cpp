#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    long long reverse = 0;
    while(n>0){
        int reminder ;
        reminder = n%10;
        reverse = reverse *10 + reminder;
        n /= 10;
    }
    cout<<reverse;
    return 0;
}