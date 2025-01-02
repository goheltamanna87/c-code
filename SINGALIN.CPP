//single inheritence...
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
void main()
{
   clrscr();
   demob b1;
   b1.a=10;
   b1.b=20;
   b1.displaya();
   b1.displayb();
   getch();
}