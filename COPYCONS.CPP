#include<iostream.h>
#include<conio.h>
class demoA
{
  public:
  demoA()
  {
  cout<<"\n from demoA constructor...";
  }
  void message()
  {
  cout<<"\n good morning";
  }
};
class demoB
{
  public:
  demoB(demoA d)
  {
      d.message();
  }
};
void main()
{
   clrscr();
   demoA dA;
   demoB dB(dA);
   getch();
}



