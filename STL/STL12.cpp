#include <bits/stdc++.h>
using namespace std;
template<class T>
void display(list<T> &l){
    list<int> :: iterator it;
    for(it = l.begin() ; it != l.end(); it++){
        cout<<*it<<" ";
    }
}
int main(){
    list<int> list1;
    int data , size;
    cout<<"Enter the size of the list ";
    cin>>size;
    for(int i = 0; i<size; i++){
        cout<<"Enter the element of the list ";
        cin>>data;
        list1.push_back(data);
    }
    cout<<endl;
    list1.sort();
    display(list1);

    cout<<endl;
    list<int> list2 ={3,1,4,2,8,5,2,9};
    list2.sort();
    display(list2);

    
    return 0;
}