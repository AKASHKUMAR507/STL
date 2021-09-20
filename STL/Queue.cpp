#include <iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;
    q.push("Akash");
    q.push("Kumar");
    q.push("Yadav");

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}