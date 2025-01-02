#include<iostream.h>
#include<conio.h>
class base
{
     public:
       base()
       {
	 cout<<"good morning from parent class...";
       }
       virtual void display()=0;
};
class derived:base
{
      public:
	 derived()
	 {
	  cout<<"\ngodd morning from child class...";
	 }
	 void display()
	 {
	 cout<<"\n good byee from derived display...";
	 }
};
void main()
{
  clrscr();
  derived d1;
  d1.display();
  getch();
}