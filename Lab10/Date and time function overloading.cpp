
//Date and Time using function overloading
/*Write Date and Time classes that allow you to add, subtract, read and print 
simple dates in dd/mm/yyyy and time in hh:mm:ss formats. 
Use function overloading in your program.*/

#include<iostream>
using namespace std;

class Date
{
      int dd,yy,mm;
            public:
                  Date()
                  {
                        dd = 0;
                        mm = 0;
                        yy = 0;
                  }
                  Date(int dd,int mm,int yy)
                  {
                        this->dd = dd;
                        this->mm = mm;
                        this->yy = yy;
                  }
                  void sub(int dd,int mm,int yy)
                  {
                        this->dd = this->dd - dd;
                        this->mm = this->mm - mm;
                        this->yy = this->yy - yy;
                  }
                  void add(int dd,int mm,int yy)
                  {
                        this->dd = this->dd + dd;
                        this->mm = this->mm + mm;
                        this->yy = this->yy + yy;
                  }
                  void display()
                  {
                        cout<<"Date : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
                  }
};

class Time
{
      int hr,mn,sec;
            public:
                  Time()
                  {
                        hr = 0;
                        mn = 0;
                        sec = 0;
                  }
                  Time(int hr,int mn,int sec)
                  {
                        this->hr = hr;
                        this->mn = mn;
                        this->sec = sec;
                  }
                  void sub(int hr,int mn,int sec)
                  {
                        this->hr = this->hr - hr;
                        this->mn = this->mn - mn;
                        this->sec = this->sec - sec;
                  }
                  void add(int hr,int mn,int sec)
                  {
                        this->hr = this->hr + hr;
                        this->mn = this->mn + mn;
                        this->sec = this->sec + sec;
                  }
                  void display()
                  {
                        cout<<"Time : "<<hr<<":"<<mn<<":"<<sec<<endl;
                  }
};


int main()
{
      int ch;
      Date D1(25,10,2023);
      Time T1(6,23,40);
      do{
            cout<<"\n1)Display Time and Date\n2)Add time\n3)Sub time\n4)Add date\n5)Sub date\n6)Exit\n";
            cin>>ch;
            switch(ch)
            {
                  case 1:T1.display();
                        D1.display();
                        break;
                  case 2:T1.add(5,2,10);
                        T1.display();
                        break;
                  case 3:T1.sub(6,8,23);
                        T1.display();
                        break;
                  case 4:D1.add(5,2,10);
                        D1.display();
                        break;
                  case 5:D1.sub(6,12,23);
                        D1.display();
                        break;
                  case 6:exit(0);
            }
      }while(ch!=6);

}






























