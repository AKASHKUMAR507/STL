// #include <bits/stdc++.h>
// using namespace std;
// class Vector
// {
// public:
//     int *arr;
//     int size;

//     Vector(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//     }
//     int dotProduct(Vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };
// int main()
// {
//     // Vector Y1(3);
//     // Y1.arr[0] = 1;
//     // Y1.arr[1] = 2;
//     // Y1.arr[2] = 3;

//     // Vector Y2(3);
//     // Y2.arr[0] = 4;
//     // Y2.arr[1] = 5;
//     // Y2.arr[2] = 6;

//     // int a = Y1.dotProduct(Y2);
//     // cout<<a<<endl; 

//     Vector Y1(3);
//     Y1.arr[0] = 1.0;
//     Y1.arr[1] = 2.0;
//     Y1.arr[2] = 3.0;

//     Vector Y2(3);
//     Y2.arr[0] = 4.0;
//     Y2.arr[1] = 5.0;
//     Y2.arr[2] = 6.0;

//     int a = Y1.dotProduct(Y2);
//     cout<<a<<endl; 

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
template <class T>
class Vector{
    public:
        T *arr;
        T size;

        Vector(int size){
            this->size = size;
            arr = new T[size];
        }
        T dotProduct(Vector &v){
            T d = 0;
            for(int i = 0; i<size; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};
int main(){
    Vector<int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    Vector<int> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;
    Vector<float> v3(3);
    v3.arr[2] = 3.2;
    v3.arr[0] = 1.2;
    v3.arr[1] = 2.2;
    Vector<float> v4(3);
    v4.arr[0] = 4.4;
    v4.arr[1] = 5.4;
    v4.arr[2] = 6.4;
    float a1 = v3.dotProduct(v4);
    cout<<a1<<endl;

    return 0;
}