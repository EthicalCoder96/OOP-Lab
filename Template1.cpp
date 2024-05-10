#include<iostream>

using namespace std;

template <class T>

class vector{
    public:
    T* arr;
    int size;
    vector(int s){
        size = s;
        arr = new T[size];
    }
    T dotProduct(vector &v){
        T sum = 0;
        for(int i=0;i<size;i++){
            sum += this->arr[i] * v.arr[i];
        }
        return sum;
    }
};

int main(){
    vector<int> v1(3);
    v1.arr[0] = 12;
    v1.arr[1] = 1;
    v1.arr[2] = 2;
    vector<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 1;
    v2.arr[2] = 2;
    int ans = v1.dotProduct(v2);
    cout<<ans;
    return 0;
}