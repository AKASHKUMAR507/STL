
#include <bits/stdc++.h>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it != lst.end(); it++){
         cout<<*it<<" ";
    }
}
int main(){
    list<int> list1;
    int data, size;
    cout<<"Enter the list Size ";
    cin>>size;
    for(int i = 0; i<size; i++){
        cout<<"Enter the element of the list ";
        cin>>data;
        list1.push_back(data);
    }
    cout<<endl;
    display(list1);

    

    // list1.push_back(5);
    // list1.push_back(2);
    // list1.push_back(3);
    // list1.push_back(4);

    // display(list1);


    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;


    return 0;
}