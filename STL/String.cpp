#include <iostream>
#include<string>
using namespace std;

int main(){
    string name = "Aaksh";
    cout<<"The name is "<<name<<endl;
    cout<<"The length of name is "<<name.length()<<endl;
    cout<<"the name is "<<name.substr(0,3)<<endl;
    cout<<"the name is "<<name.substr(1,3)<<endl;
    return 0;
}