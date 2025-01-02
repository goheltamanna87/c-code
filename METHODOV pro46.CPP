#include<iostream.h>
#include<conio.h>
class demoa
{
   public:
      int a;
      void inputdata()
      {
      cout<<"\n parent class...";
      cout<<"\n Enter value of a:";
      cin>>a;
      }
      void display()
      {
      cout<<"value of a is:"<<a;
      }
};
class demob:public demoa
{
   public:
     int a,b;
     void inputdata()
     {
     demoa::inputdata();
     cout<<"\n child class...";
     cout<<"\n Enter value of a:";
     cin>>a;
     cout<<"\n Enter value of b:";
     cin>>b;
     }
     void display()
     {
     demoa::display();
     cout<<"sum of a and b:"<<(a+b);
     }
};
void main()
{
   clrscr();
   demob db;
   db.inputdata();
   db.display();
   getch();
}











													
