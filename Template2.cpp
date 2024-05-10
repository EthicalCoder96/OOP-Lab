#include<iostream>

using namespace std;

template <class t1=float,class t2=int,class t3=char>

class Myclass{
    public:
        t1 a;
        t2 b;
        t3 c;
        Myclass(t1 x,t2 y, t3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"a is "<<a<<endl;
            cout<<"b is "<<b<<endl;
            cout<<"c is "<<c<<endl;
        }
};

int main(){
    Myclass<> m1(2.4,3,'c');
    m1.display();
    Myclass<char,float,string> m2('x',3.14,"pi");
    m2.display();
    return 0;
}