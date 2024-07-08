#include<iostream>
using namespace std;
class Student{
    int roll;
    string name, department;
    public:
    Student(){}
    Student(int roll, string name, string department):roll(roll),name(name),department(department)
    {}
    void display(){
        cout<<"Name:"<<name<<endl<<"Roll Number:"<<roll<<endl<<"Department:"<<department<<endl;
    }
};
int main(){
    Student s(11,"Deep","BCT");
    s.display();
}