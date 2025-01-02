#include<iostream.h>
#include<conio.h>
class arithopr
{
  public:
  int a,b;
  void inputdata()
  {
   cout<<"Enter value of a:";
   cin>>a;
   cout<<"Enter value of b:";
   cin>>b;
  }
friend arithopr operator +(arithopr a1,arithopr a2);

void display()
{
cout<<"\n value of a is:"<<a;
cout<<"\n value of b is:"<<b;
}
};
arithopr operator +(arithopr a1,arithopr a2)
{
  arithopr a3;
  a3.a=a1.a+a2.a;
  a3.b=a1.b+a2.b;
  return a3;
}
void main()
{
   clrscr();
   arithopr a1,a2,a3;
   cout<<"Enter first object value:\n";
   a1.inputdata();

   cout<<"Enter second object value:\n";
   a2.inputdata();

   a3=a1+a2;
   cout<<"\n first object data"<<endl;
   a1.display();

   cout<<"\n second object data"<<endl;
   a2.display();

   cout<<"\nthird anser object data"<<endl;
   a3.display();

   getch();
}