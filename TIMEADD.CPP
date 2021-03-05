#include<iostream>
#include<conio.h>
using namespace std;
class  time
{
  public:
  int hr,min,sec;
  void input()
  {
    cout<<"\n Input hour : ";
    cin>>hr;
    cout<<"\n Input minute : ";
    cin>>min;
    cout<<"\n Input second : ";
    cin>>sec;
  }
  void display()
  {
    cout<<"Time : ";
    cout<<hr<<":"<<min<<":"<<sec;
  }
  time  add(time &t1,time &t2)
  {
    time total;
    total.hr=t1.hr+t2.hr;
    total.min=t1.min+t2.min;
    total.sec=t1.sec+t2.sec;
    if (total.sec>=60)
    {
     total.min=total.min+total.sec/60;
     total.sec=total.sec%60;
    }
    if (total.min>=60)
    {
     total.hr=total.hr+total.min/60;
     total.min=total.min%60;
    }
    return total;
  }
};
  int main()
{
    
    time t1,t2,t3;
    time temp;
    t1.input();
    t2.input();
    t1.display();
    cout<<"\n";
    t2.display();
    cout<<"\n";
    temp=t3.add( t1,t2);
    cout<<"\n Total ";
    temp.display();
    getch();
    return 0;
}
