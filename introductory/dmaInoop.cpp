#include<iostream>
#include<string>
using namespace std;
class Student{
    int roll_no, cgpa;
    string grade,name;
    public:
    void setName(string name){
        this->name=name;
    }
    void setCgpa(int cgpa){
        this->cgpa=cgpa;
    }
    void setGrade(string grade){
        this->grade=grade;
    }
    void setRoll(int roll){
        roll_no=roll;
    }
    string getName(){
        return name;
    }
    int getCgpa(){
        string n;
        cout<<"Enter name:"<<endl;
        cin>>n;
        if(n== this->name){
        return cgpa;
        }
        else{
            return 0;
        }
    }
    int getRoll(){
        return roll_no;
    }
    string getGrade(){
        return grade;
    }
};
int main(){
    Student *S1=new Student;
    (*S1).setName("Deep");
    (*S1).setRoll(11);
    S1->setCgpa(9);
    S1->setGrade("A+");
    
}