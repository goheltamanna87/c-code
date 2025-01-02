//multilevel inheritence...
#include<iostream.h>
#include<conio.h>
class demoa
{
   public:
   int a;
   demoa()
   {
    cout<<"\n good morning from demoa constructor...";
   }
   void displaya()
   {
   cout<<"\n value of a is:"<<a;
   }
};
class demob: public demoa
{
   public:
   int b;
   demob()
   {
    cout<<"\n good morning from demob constructor...";
   }
   void displayb()
   {
   cout<<"\n value of b is:"<<b;
   }
};
class democ: public demob
{
   public:
   int c;
   democ()
   {
    cout<<"\n good morning from democ constructor...";
   }
   void displayc()
   {
   cout<<"\n value of c is:"<<c;
   }
};
void main()
{
   clrscr();
   democ c1;
   c1.a=10;
   c1.b=20;
   c1.c=30;
   c1.displaya();
   c1.displayb();
   c1.displayc();
   getch();
}