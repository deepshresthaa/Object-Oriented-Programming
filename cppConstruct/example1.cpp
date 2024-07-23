//wap to find the sum of two times entered by the user using the concept of friend function.
#include<iostream> 
using namespace std;
class Time{
    int hr, min, sec;
    public:
    Time():hr(0),min(0),sec(0){}
    Time(int hr,int min=0,int sec=0):hr(hr),min(min),sec(sec){}
    void showtime(){
        if(hr>=12){
            hr%=12;
        }
        if(min>=60){
            min%=60;
            hr++;
        }
        if (sec>=60){
            sec%=60;
            min++;
        }
        cout<<"Hour: "<<hr<<endl<<"Minute: "<<min<<endl<<"Seconds: "<<sec<<endl<<endl<<endl;
    }
    friend Time addTime(Time, Time);
};
Time addTime(Time t1,Time t2){
    Time t;
    t.hr=t1.hr+t2.hr;
    t.min=t1.min+t2.min;
    t.sec=t1.sec+t2.sec;
    return t;
}
int main(){
    Time t1(3,40,50),t2(0,50,30);
    Time t=addTime(t1,t2);
    t1.showtime();
    t2.showtime();
    t.showtime();
    return 0;
}