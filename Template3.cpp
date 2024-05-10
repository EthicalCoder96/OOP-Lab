#include<iostream>

using namespace std;

// template for average calculations
template <class T1,class T2>
float average(T1 a,T2 b){
    return (a+b)/2.0;
}

// Template for swapping
template <class T>
void swapTwo(T &a,T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    cout<<"Average of 3 and 4 is "<<average(3,4)<<endl;
    int a = 12;
    int b = 4;
    swapTwo(a,b);
    cout<<a<<"--"<<b<<endl;
    return 0;
}