/*
Stack
        lifo data strutore  |        |
                            |        |
                            |        |
                            |        |
                            |________|

                 Operarion  -- push
                            -- pop
                            -- Top
                            -- Size           

Queue 
        fifo data structore
                            ______________________________
                           |  A  |  B   |  c   |   D    |
                           | ___ |_____  |_____ |______|

                Operarion   -- push
                            -- pop
                            -- Front
                            -- Size   

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    queue<string> q;
    q.push("Akash1");
    q.push("Akash2");
    q.push("Akash3");
    q.push("Akash4");
    q.push("Akash5");

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<endl;

    cout<<R"(
Stack
        lifo data strutore  |        |
                            |        |
                            |        |
                            |        |
                            |________|

                 Operarion  -- push
                            -- pop
                            -- Top
                            -- Size           

Queue 
        fifo data structore
                            ______________________________
                           |  A  |  B   |  c   |   D    |
                           | ___ |_____  |_____ |______|

                Operarion   -- push
                            -- pop
                            -- Front
                            -- Size   

         )"<<endl;

    
    cout<<R"(#include <bits/stdc++.h>
    using namespace std;
    
    int main(){
        
        return 0;
    })";
    return 0;
}