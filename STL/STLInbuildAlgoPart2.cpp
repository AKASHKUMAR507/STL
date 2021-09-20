#include <bits/stdc++.h>
using namespace std;

bool is_positve(int x){
    return x > 0;
}

int main(){
    // --------------------------------------------------
    cout<< [](int x){return x+2;}(4)<<endl;
    // --------------------------------------------------
    auto sum = [](int x , int y){return x + y; };
    cout<<sum(21,3)<<endl;
    // --------------------------------------------------
    
    vector<int> v = {1,2,3,4,5,6};
    cout<<all_of(v.begin() , v.end() , [](int x){return x>0;});
    // --------------------------------------------------
    cout<<all_of(v.begin() , v.end() ,is_positve);

    // --------------------------------------------------
    vector<int> v1 = {1,-2,-3,-4,-5,-6};
    cout<<any_of(v1.begin() , v1.end() , [](int x){return x>0;});
    // --------------------------------------------------
    vector<int> v3 = {-1,-2,-3};
    cout<<none_of(v3.begin() , v3.end() , [](int x){return x>0;});
    

    return 0;
} 