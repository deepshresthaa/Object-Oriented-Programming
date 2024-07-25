/// wap to illustrate the concept of unary operator overloading
#include<iostream>
using namespace std;
class Complex{
    float real, imag;
    public:
    Complex():real(0.0),imag(0.0){}
    Complex(float r, float i):real(r),imag(i){}
    Complex operator ++(){
        real+=1;
        imag+=1;
    }
    void showdata(){
        cout<<real<<"+i"<<imag<<endl;
    }
    Complex operator ++(int){
        real+=1;
        imag+=1;
    }
};
int main(){
    Complex c1,c3;
    c1.showdata();
    ++c1;
    c1.showdata();
    Complex c2(3.3,4.4);
    c2.showdata();
    c3=c2++;
    c2.showdata();
    c3.showdata();
    return 0;
}