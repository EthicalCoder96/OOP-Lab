#include<iostream>

using namespace std;

template <class T>
class Array{
    public:
        T* arr;
        int size;

        Array(int size){
            this->size = size;
            arr = new T[size];
        }

        void setArray(){
            for(int i=0;i<size;i++){
                cout<<"Enter element : ";
                cin>>arr[i];
            }
            cout<<"Array set successfully !"<<endl;
        }

        bool LinearSearch(T elem){
            for(int i=0;i<size;i++){
                if(arr[i]==elem){
                    return true;
                }
            }
            return false;
        }
        ~Array(){
            delete[] arr;
        }
};

int main(){
    Array<int> arr(5);
    arr.setArray();
    if(arr.LinearSearch(12)){
        cout<<"Element found in array"<<endl;
    } else {
        cout<<"Element not found in array"<<endl;
    }
    return 0;
}