#include<iostream> 
using namespace std;
class Customer{
    string name;
    int acc_no, balance;
    public:
    //default constructor
    Customer(){
        cout<<"Default constructor called:"<<endl;

    }
    //parameterized constructor
    Customer(string name, int acc_no, int balance){
        cout<<"Parameterized constructor called."<<endl;

        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
    }
    void display(){
        cout<<"Name:"<<name<<endl<<"Account number:"<<acc_no<<endl<<"Bank balance:"<<balance<<endl;

    }
};

int main(){
    Customer c1;
    Customer c2("Deep",1,1000);
    // c1.display();
    c2.display();


}