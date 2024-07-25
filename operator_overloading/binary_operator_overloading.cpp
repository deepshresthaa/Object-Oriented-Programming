// Wap to illustrate the concept of binary operator overloading using member function.
#include<iostream>
using namespace std;
class Complex{
    float real,imag;
    public:
    Complex():real(0.0),imag(0.0){}
    Complex(float r, float i):real(r),imag(i){}
    void showdata(){
        cout<<real<<"+i"<<imag<<endl;
    }
    Complex operator +(Complex &c){
        Complex temp;
        temp.real=this->real+c.real;
        temp.imag=this->imag+c.imag;
        return temp;
    }
};
int main(){
    Complex c1(4,5),c2(5,6),c3;
    c3=c1+c2;
    c3.showdata();
    return 0;
}