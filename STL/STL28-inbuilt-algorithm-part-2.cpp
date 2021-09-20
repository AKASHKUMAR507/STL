#include <bits/stdc++.h>
using namespace std;
bool is_positive(int x){
    return x > 0;
}
int main(){
    //lambda function
    // cout<<[](int x, int y){return x+y;}(4 , 7)<<endl;
    // auto sum = [](int x, int y){return x+y;};
    // cout<<sum(3,5);

    vector<int> v = {-1,2,3,4};
    cout<<all_of(v.begin() , v.end() , [](int x){return x>0;});
    cout<<any_of(v.begin() , v.end() , [](int x){return x>0;});
    cout<<none_of(v.begin() , v.end() , [](int x){return x>0;});

    // cout<<endl;


    // // cout<<all_of(v.begin() , v.end(),is_positive);

    // cout<<any_of(v.begin() , v.end(),is_positive);


    // cout<<none_of(v.begin() , v.end(),is_positive);
    


    return 0;
}