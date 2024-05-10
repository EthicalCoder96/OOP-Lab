#include<iostream>

using namespace std;

template<class T>

class Matrix{
    private:
        T ** m;
        int columns;
        int rows;
    public:
        Matrix(int c,int r){
            columns = c;
            rows = r;
            m = new T*[rows];
            for(int i=0;i<columns;i++){
                m[i] = new T[columns];
            }
        }

        friend istream& operator>>(istream &in,Matrix &m);
        friend ostream& operator>>(ostream &out,Matrix &m);
};

