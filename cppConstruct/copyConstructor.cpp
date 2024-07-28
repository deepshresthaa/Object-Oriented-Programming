#include<iostream>
#include<string>
using namespace std;
class Student{
    int roll;
    string name;
    public:
    Student(){
        roll=0;
        name="steve jobs";
    }

    Student(int roll, string name):roll(roll),name(name){}
    Student(Student &s){
        roll=s.roll;
        name=s.name;
    }
    void showData(){
        cout<<"Hi! I am "<<name<<", my roll number is "<<roll<<"."<<endl;
    }
};
int main(){
    Student s1,s2(11,"Deep"),s3;
    s3=s2;
    s1.showData();
    s2.showData();
    s3.showData();
    return 0;
}