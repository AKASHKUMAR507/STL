// template with default parameter

#include <bits/stdc++.h>
using namespace std;
template<class T1 = int , class T2 = float , class T3 = char>
class Akash{
    public:
        T1 a;
        T2 b;
        T3 c;
        Akash(T1 x , T2 y , T3 z){

            // this->a = a;
            // this->b = b;
            // this->c = c;

            this->a = x;
            this->b = y;
            this->c = z;

            // a = x;
            // b = y;
            // c = z;

        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
        
};
int main(){
    Akash<> a(100 , 199.92 , 'A');

    a.display();
    cout<<endl;

    Akash<float , char , int> k(100.33 , 'c' , 92);

    k.display();

    return 0;
}