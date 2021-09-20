#include <iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;
    
    s.push("Akash");
    s.push("kumar");
    s.push("yadav");

    s.pop();
    cout<<s.top()<<endl;

    cout<<s.size()<<endl;

    cout<<s.empty()<<endl;

    


    return 0;
}