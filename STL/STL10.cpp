#include <bits/stdc++.h>
using namespace std;
template<class T>
void display(vector<T> &v)
{
    cout<<"Displaying this Vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    // display(vec1);

    vector<char> vec2(3);
    // vec2.push_back('A');
    // display(vec2);

    vector<char> vec3(vec2);
    // display(vec3);

    vector<int> vec4(7,4);
    display(vec4);
    

    // int size, element;
    // cout << "Enter the size of the vector " << endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "ENter the element of the vector " << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    // display(vec1);

    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5, 100);

    // display(vec1);


    



    return 0;
}