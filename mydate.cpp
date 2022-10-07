#include<bits/stdc++.h>
using namespace std;

class date
{
private:
    int day,month,year;
public:
    date(){
        day=0;
        month=0;
        year=0;
    }
    date(int d, int m, int y){
        day=d;
        month=m;
        year=y;        
    }
    
    void read(){
        cout<<"Enter the date,month and year\n";
        cin>>day>>month>>year;
    }

    void show(){
        cout<<day <<" : "<<month<<" : "<<year<<endl;
    }
    int IsLeapYear(){
        if ((year%4==0 && year%100) ||(year%4==0))
        {
            return 1;
        }
        else return 0;        
    }
    int thisMonthMaxDay(){
        int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        if (month==2 && IsLeapYear())
        {
            return 29;  
        }
        else return months[month-1];        
    }

    void operator++(){
        day++;
        if (day>thisMonthMaxDay())
        {
            day=1;
            month++;
        }
        if (month>12)
        {
            month=1;
            year++;
        }        
    }
};

void nextDay(date & d){
    cout<<"Date ";
    d.show();
    ++d;
    cout<<"Date after increment :\n";
    d.show();
    cout<<endl;
}

int main(){
    date d1(14,4,1971);
    date d2(28,2,1992);//leap year
    date d3(28,2,1993);
    date d4(31,12,1995);
    nextDay(d1);
    nextDay(d2);
    nextDay(d3);
    nextDay(d4);
    date today;
    today.read();
    nextDay(today);
    return 0;
}


