#include<iostream.h>
#include<conio.h>
class arithconst
{
   public:
   float x,y;
   arithconst()
   {
     x=50.5;
     y=30.5;
   }
   arithconst(float a)
   {
     x=a;
     y=20.5;
   }
   arithconst(float a,float b)
   {
      x=a;
      y=b;
   }
   void addition()
   {
     cout<<"\n Addition is:"<<(x+y);
   }
   void substraction()
   {
     cout<<"\n substraction is:"<<(x-y);
   }
   void multiplication()
   {
     cout<<"\n multiplication is:"<<(x*y);
   }
   void division()
   {
     cout<<"\n division is:"<<(x/y);
   }
   void modulus()
   {
     cout<<"\n modulus is:"<<(x/y)*100;
   }
};
void main()
{
    clrscr();
    arithconst ac1;
    arithconst ac2(10.5);
    arithconst ac3(5.5,5.5);

    cout<<"\n  \n";
    cout<<"\n default constuctor data:";
    ac1.addition();
    ac1.substraction();
    ac1.multiplication();
    ac1.division();
    ac1.modulus();

    cout<<"\n  \n";
    cout<<"\n singal parameter constuctor data:";
    ac2.addition();
    ac2.substraction();
    ac2.multiplication();
    ac2.division();
    ac2.modulus();

    cout<<"\n  \n";
    cout<<"\n two parameter constuctor data:";
    ac3.addition();
    ac3.substraction();
    ac3.multiplication();
    ac3.division();
    ac3.modulus();

    getch();
}


