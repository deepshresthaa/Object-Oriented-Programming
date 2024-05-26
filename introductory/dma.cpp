#include<iostream>
using namespace std;
int main(){
    int* p;
    float* q; 
    char* r;
    p=new int(4);
    q=new float(11.2);
    r=new char('D');
    cout<<*p<<endl<<*q<<endl<<*r;
    return 0;
}