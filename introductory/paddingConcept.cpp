#include<iostream>
using namespace std;
class Student{
    char a;
    int roll;
    char s;
};
class Deep{
    
};
class A{
    int x;
    
    char a;
};
int main(){
    Student s;
    cout<<sizeof(s)<<endl;
    Deep d;
    cout<<sizeof(d)<<endl;
    A a;
    cout<<sizeof(a)<<endl;
}