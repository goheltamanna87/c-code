//class to variable
#include<iostream.h>
#include<conio.h>
class time
{
  int hrs,min;
  public:
   time(int a,int b)
   {
cout<<"\nconstructor called with two parameters.."<<endl;
  hrs=a;
  min=b;
  }
  operator int();
  ~time()
  {
  cout<<"\ndestructor called..."<<endl;
  }
};
time::operator int()
{
cout<<"\nclass type to basic type conversion"<<endl;
return (hrs*60+min);
}
void main()
{
   clrscr();
   int h,m,duration;
   cout<<"\nEnter Hours:";
   cin>>h;
   cout<<"\nEnter minutes:";
   cin>>m;
   time t(h,m); //construct object
   duration=t; ///casting conversion or duration=(int)t
   cout<<"\ntotal minutes are"<<duration;
   cout<<"\n2nd method operator overloading"<<endl;
   duration=t.operator int();
   cout<<"\ntotal minutes are"<<duration;
   getch();
   }







