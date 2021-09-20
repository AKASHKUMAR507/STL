//balence paranthesis

// input 
// 3
// {[()]}
// {[(])}
// {{[[((()))]]}}
// yes
// no
// yes

#include <bits/stdc++.h>
using namespace std;
unordered_map<char , int> symbols = {{'[' , -1},{'{' , -2},{'(' , -3},{']' , 1},{'}' , 2},{')' , 3}};

string isBalenced(string s){
    stack<char> st;
    for(char breacket : s){
        if(symbols[breacket] < 0){
            st.push(breacket);
        }else{
            if(st.empty()) return "No";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[breacket] != 0){
                return "No";
            }
        }
    }
    if(st.empty()) return "Yes";
    return "No";
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<isBalenced(s)<<endl;
    }
    
    return 0;
}