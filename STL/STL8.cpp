// template with default parameter in c++
#include <iostream>
using namespace std;
template<class T1 = int , class T2 = float> 

class Rain{
    public:
        T1 a;
        T2 b;
        Rain(T1 x, T2 y){
            this->a = x;
            this->b = y; 
        }
        void display(){
            cout<<"The value of A is "<<a<<endl;
            cout<<"The value of B is "<<b<<endl;
        }
};
int main(){
    Rain<int , string> ak(1,"Akash");
    ak.display();
    return 0;
}