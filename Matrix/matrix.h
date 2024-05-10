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

        template<class U>
        friend istream& operator>>(istream &in,Matrix<U> &m);
    
        template<class U>
        friend ostream& operator<<(ostream &out,const Matrix<U> &m);

        ~Matrix() {
            for(int i = 0; i < rows; i++) {
                delete[] m[i];
            }
            delete[] m;
        }
};

template<class T>
istream& operator>>(istream& in, Matrix<T>& mat) {
    for (int i = 0; i < mat.rows; i++) {
        for (int j = 0; j < mat.columns; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            in >> mat.m[i][j];
        }
    }
    return in;
}

template<class T>
ostream& operator<<(ostream& out, const Matrix<T>& mat) {
    for (int i = 0; i < mat.rows; i++) {
        for (int j = 0; j < mat.columns; j++) {
            out << mat.m[i][j] << " ";
        }
        out << endl;
    }
    return out;
}
