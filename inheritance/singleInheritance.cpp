//wap to illustrate the concept of single inheritance
#include<iostream>
#include<string>
using namespace std;
class Student{
    protected:
    char name[30];
    int roll;
    public:
    void getStudent(){
        cout<<"Enter name of student: "<<endl;
        cin>>name;
        cout<<"Enter roll of student: "<<endl;
        cin>>roll;
    }
    void showStudent(){
        cout<<"Name: "<<name<<endl<<"Roll no: "<<roll<<endl;
    }
};
class Leader:public Student{
    protected:
    char un[50];
    int id;
    public:
    void getLeader(){
        cout<<"Enter union name: "<<endl;
        cin>>un;
        cout<<"Enter union id: "<<endl;
        cin>>id;

    }
    void showLeader(){
        cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl<<"Union name: "<<un<<endl<<"Union id: "<<id<<endl;

    }

};
int main(){
    Leader l;
    l.getStudent();
    l.getLeader();
    cout<<"Data of student:::"<<endl;
    l.showStudent();
    cout<<"Data of Leader::::"<<endl;
    l.showLeader(); 
    return 0;
}