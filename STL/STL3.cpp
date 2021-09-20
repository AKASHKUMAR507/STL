//template with Multiple parameter in c++

#include <bits/stdc++.h>
using namespace std;
/*
template<class T1 , class T2>
class MyName{
    //code
}
*/
template < class T1 , class T2>
class MyClass{
    public:
        T1 data1;
        T2 data2;

        MyClass(T1 a , T2 b){
            this->data1 = a;
            this->data2 = b;
        }
        void setData(){
            
        }

        void display(){
            cout<<this->data1<<" "<<this->data2<<endl;
        }
};
int main(){
    // MyClass<int , char> ak(101,'A');
    // ak.display();
    int a;
    cin>>a;
    char c;
    cin>>c;
    MyClass<int , char> ak(a , c);
    ak.display();
    return 0;
}