#include<iostream>
using namespace std;
class Student{
    int a;
    public:
    Student(int a){
        cout<<"Constructor called"<<a<<endl;
    }
    ~Student(){
        cout<<"Destructor called"<<a<<endl;
    }
};
int main(){
    Student s1;
}