//Function Obeject in c++
#include <bits/stdc++.h>
using namespace std; 

int main(){
    //Function Objects (functor) :: function wrapped in a class so that it avaible like an object
    int arr[] = {2,1,3,0,45,5,6,8,5,43};
    // sort(arr, arr+9);
    sort(arr, arr+9,greater<int>());
    for(int i = 0; i<9 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}