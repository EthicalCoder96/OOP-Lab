#include<iostream>
#include"array.h"

using namespace std;

int main(){
    Array<float> arr(5);
    arr.setArray();
    if(arr.linearSearch(15)){
        cout<<"Element found !"<<endl;
    }
    else{
        cout<<"Element not found !"<<endl;
    }
    cout<<"Index of element 12 in array is "<<arr.index(12)<<endl;
    return 0;
}