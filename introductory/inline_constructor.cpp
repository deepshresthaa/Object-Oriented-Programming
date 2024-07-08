#include<iostream>
using namespace std;
class Atm{
    string  name;
    int acc_number, balance;
    public:
    Atm(){}
    Atm(string name, int acc_number, int balance):name(name),acc_number(acc_number),balance(balance){}
    Atm(Atm &b){
        name=b.name;
        acc_number=b.acc_number;
        balance=b.balance;
    }
    void display(){
        cout<<"Name:"<<name<<endl<<"Account Number:"<<acc_number<<endl<<"Balance:"<<balance<<endl;
    }
};
int main(){
    Atm a1("Deep",1234,10000);
    Atm a2(a1);
    a1.display();
    a2.display();
    return 0;
}