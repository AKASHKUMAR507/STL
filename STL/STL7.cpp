// member function template & overloading template Function in c++

#include <iostream>
using namespace std;
template<class T>
class Temp{
    public:
        T data;

        Temp(T a){
            this->data = a;
        }
        
        // void display(){
        //     cout<<"data is "<<data<<endl;
        // }

        void display();
};
template<class T>
void Temp<T> :: display(){
    cout<<"Data is "<<data<<endl;
}
void func(int a){
    cout<<" I am func 1 "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<" I am Templised func 1 "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<" I am Templised func 1 "<<a<<endl;
}

int main(){
    // Temp<int> ak(12);
    // ak.display();

    // Temp<float> dk(12.32);
    // dk.display();

    // Temp<string> dk("Akash Kumar");
    // dk.display();

    func(12);  // Extra match always take highest priority 

    return 0;
}