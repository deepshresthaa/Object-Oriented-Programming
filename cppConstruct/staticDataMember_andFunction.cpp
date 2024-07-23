#include<iostream>
using namespace std;
class Complex{
    float real, imag;
    public:
    static int count;
    static void increaseCount(){
        count++;
    }
    Complex(){
        real=0.0;
        imag=0.0;
        increaseCount();
    }
    Complex(float r, float i){
        real=r;
        imag=i;
        count++;
    }
    static void show_no_of_objects(){
        cout<<"No of objects created are: "<<count;
    }
    void showdata(){
        cout<<real<<"+i"<<imag<<endl;
    }
};
int Complex::count=0;
int main(){
    Complex c1(3,4);
    Complex c2;
    c1.showdata();
    cout<<"NO of objects:"<<Complex::count<<endl;
    c2.showdata();
    c2.show_no_of_objects();
    return 0;
}