//wap in cpp to input details of student and display the entered details using the oop concept
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
    void showData(){
        cout<<"Hi! I am "<<name<<", my roll number is "<<roll<<"."<<endl;
    }
};
int main(){
    Student s1,s2(11,"Deep");
    s1.showData();
    s2.showData();
    return 0;
}