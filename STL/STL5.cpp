// function template in c++
#include <iostream>
using namespace std;
float funAvg(int a, int b){
    float avg = (a+b)/2.0;
    return avg;
}
float funAvg2(int a, float b){
    float avg2 = (a+b)/2.0;
    return avg2;
}

//function template in c++

template<class T1 , class T2>
float fun(T1 a, T2 b){
    float avg2 = (a+b)/2.0;
    return avg2;
}



int main(){
 
    float a;
    a = funAvg(22 , 7);
    printf("The average of these number is %.3f ",a);
    cout<<endl;
    float a1;
    a1 = funAvg2(11 , 8.6);
    printf("The average of these number is %.3f ",a1);
    cout<<endl;
    // float T;
    // T = fun(11 , 8.6f);
    // printf("The average of these number is %.3f ",T);
    // cout<<endl;
    // ---------------------function template in c++-----------------
    float T;
    T = fun(11 , 98);
    printf("The average of these number is %.3f ",T);
    cout<<endl<<endl;
    
    return 0;
}