#include<iostream>

using namespace std;

template<class T>

class Array{
    public:
        T* arr;
        int size;

        Array(int size){
            this->size = size;
            arr = new T[size];
        }
//setting array
        void setArray(){
            for(int i=0;i<size;i++){
                cout<<"Enter element : ";
                cin>>arr[i];
            }
            cout<<"Array set successfuly !"<<endl;
        }

        bool linearSearch(int elem){
            for(int i=0;i<size;i++){
                if(arr[i]==elem){
                    return true;
                }
            }
            return false;
        }

        int index(T elem){
            for(int i=0;i<size;i++){
                if(arr[i]==elem){
                    return i;
                }
            }
            return -1;
        }
};

