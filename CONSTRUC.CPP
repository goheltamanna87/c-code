#include<iostream.h>
#include<conio.h>
class a
{
  public:
  a()
  {
  cout<<"\n good morning from default constructor";
  }
  a(char*a)
  {
  cout<<"\n from parameterized constructor good bye...."<<a;
  }
};
void main()
{
   clrscr();
   a a1;
   a a2("xyz");
   getch();
}
