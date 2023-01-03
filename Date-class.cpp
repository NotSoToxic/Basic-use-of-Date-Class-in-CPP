#include<iostream>
using namespace std;
class Date
{
      int day;
      int month;
      int year;
      public:
             Date(int d,int m,int y)
             {
                   day=d;
                   month=m;
                   year=y;
             }

             friend Date operator -(Date &,int);
             friend Date operator +(Date &,int);
             void display()
             {
                  cout<<"Date:"<<day<<"-"<<month<<"-"<<year<<endl;
             }
};
Date operator-(Date &x,int y)
{
     return Date(x.day-y, x.month, x.year);
}
Date operator+(Date &x,int y)
{
     return Date(x.day+y, x.month, x.year);
}
int main()
{
    int dd,mm,yy;
    cout<<"Enter Day:";
    cin>>dd;
    cout<<"Enter Month:";
    cin>>mm;
    cout<<"Enter Year:";
    cin>>yy;

    Date d1(dd,mm,yy);
    Date d2=d1-1;
    d2.display();
    Date d3=d1+1;
    d3.display();
    return 0;
}