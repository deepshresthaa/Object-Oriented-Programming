#include<iostream>
using namespace std;
class Student{
    int roll_no;
    float fees;
public:
    Student(int roll, float fee){
        roll_no=roll;
        fees=fee;
    }
    void get_data();
};
void Student::get_data(){
    cout<<fees<<roll_no;
}

int main(){
    Student s(11,3000.33);
    s.get_data();
    return 0;

}