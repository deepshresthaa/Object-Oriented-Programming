// basic1.cpp can be done alternatively by defining member function outside the class definition
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
    void showData();
};
void Student::showData(){
    cout<<"Hi! I am "<<name<<", my roll number is "<<roll<<"."<<endl;

}
int main(){
    Student s1,s2(11,"Deep");
    s1.showData();
    s2.showData();
    return 0;
}