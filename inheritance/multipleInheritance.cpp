//Wap to illustrate the concept of multiple inheritance 
#include<iostream>
using namespace std;
class Student{
    protected:
    char name[40];
    int roll;
    public:
    void getStudent(){
        cout<<"Enter name of student::"<<endl;
        cin>>name;
        cout<<"Enter roll no of student::"<<endl;
        cin>>roll;
    } 
    void showStudent(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};
class Employee{
    protected:
    char org_name[50];
    int id;
    public:
    void getEmployee(){
        cout<<"Organization name: "<<endl;
        cin>>org_name;
        cout<<"Organization ID: "<<endl;
        cin>>id;
    }
    void showEmployee(){
        cout<<"Organization Name: "<<org_name<<endl<<"Organization ID"<<id<<endl;

    }
};
class Officer:public Student, public Employee{
    protected:
    int working_hours;
    public:
    void getOfficer(){
        cout<<"Enter working hour: "<<endl;
        cin>>working_hours;
        
    }
    void showOfficer(){
        cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl<<"Organization Name: "<<org_name<<endl<<"Organization ID:"<<id<<endl<<"Working hours: "<<working_hours<<endl;

    }
};

int main(){
    // Student s;
    // s.getStudent();
    // s.showStudent();
    // Employee e;
    // e.getEmployee();
    // e.showEmployee();
    
    Officer l;
    l.getStudent();
    l.getEmployee();
    l.getOfficer();
    l.showOfficer();
    return 0;
}