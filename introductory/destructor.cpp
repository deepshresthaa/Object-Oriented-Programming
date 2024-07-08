#include<iostream> 
using namespace std;
class Student{
    string name; 
    int *roll;
    public:
    Student(){}
    Student(string name, int roll){
        cout<<"Constructor called."<<endl;
        this->name=name;
        *roll=new int;
        this->(*roll)=roll;
    }
    ~Student(){
        delete roll;
        cout<<"Destructor called."<<endl;
    }
    
}
int main(){
    Student s("Deep",11);
}