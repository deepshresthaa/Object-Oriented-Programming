#include<iostream>
using namespace std;
class Bank{
    static int total_user;
    string name;
    int account_number, balance;
    public:
    Bank(){}
    Bank(string name, int account_number, int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_user++;
    }
    void display(){
        cout<<"Name:"<<name<<endl<<"Account Number::"<<account_number<<endl<<"Balance:"<<balance<<endl;
    }
    void total_user(){
        cout<<"Total active users are "<<total_user<<endl;
    }
};

int Bank::total_user=0;

int main(){
    Bank deep;
    Bank sagar("Sagar",1343243,10000);
    sagar.display();
}