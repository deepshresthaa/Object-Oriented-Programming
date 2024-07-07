#include<iostream>
#include<string>
using namespace std;
class Student{
    int roll_no, cgpa;
    string grade,name;
    public:
    void setName(string name){
        if(name.size()==0) cout<<"Please enter a valid name.";
        else{this->name=name;
}
        this->name=name;
    }
    void setCgpa(int cgpa){
        this->cgpa=cgpa;
    }
    void setgrade(string grade){
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
    Student s1;
    s1.setName("Deep");
    s1.setCgpa(9);
    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa();
}