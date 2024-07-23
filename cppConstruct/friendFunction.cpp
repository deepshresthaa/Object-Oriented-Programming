// Wap  in cpp to find the sum of two complex numbers using the concept of friend function.
#include<iostream>
using namespace std;
class Complex{
    float real,imag;
    public:
    Complex():real(0.0),imag(0.0){}
    Complex(float r, float i):real(r),imag(i){}
    void showdata(){
        cout<<real<<"+i "<<imag<<endl;
    }
    friend Complex addition(Complex, Complex);
};
Complex addition(Complex c1, Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}
int main(){
    Complex c1(3,4),c2(4.4,5.5),c3;
    c3=addition(c1,c2);
    c3.showdata();
    return 0;
}