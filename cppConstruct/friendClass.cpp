// write a program to find sum of two complex numbers using the concept of friend class

#include<iostream>
using namespace std;
class sumComplex;
class Complex{
    float real,imag;
    public:
    Complex():real(0.0),imag(0.0){}
    Complex(float r, float i):real(r),imag(i){}
    void showdata(){
        cout<<real<<"+i "<<imag<<endl;
    }
    friend sumComplex;
};
class sumComplex{
    public:
    Complex addition(Complex c1, Complex c2){
        Complex temp;
        temp.real=c1.real+c2.real;
        temp.imag=c1.imag+c2.imag;
        return temp;
    }
};
int main(){
    Complex c1(3,4),c2(4.4,5.2),c3;
    sumComplex sc;
    c3=sc.addition(c1,c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}