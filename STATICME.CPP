#include<iostream.h>
#include<conio.h>
class totalstudent
{
   int grno;
   static int cnt;
   public:
   int count;
   void setgrno(int gr)
   {
      grno=gr;
      cnt++;
      count++;
   }
   void gettotalstudent()
   {
     cout<<"\n total number of students are:"<<cnt;
     cout<<"\n total number of students as per object:"<<count;
   }
};


int totalstudent::cnt=0;
void main()
{
    clrscr();
    int grno;
    totalstudent ts1,ts2,ts3;
    ts1.count=ts2.count=ts3.count=0;
 cout<<"";
 cout<<"\n Enter first object values:"<<endl;
  cout<<"";
 for(int x=1;x<=3;x++)
 {
 cout<<"\nEnter grno:";
 cin>>grno;
 ts1.setgrno(grno);
 }
  cout<<"";
  cout<<"\n Enter second object values:"<<endl;
   cout<<"";
 for(x=1;x<=5;x++)
 {
 cout<<"\nEnter grno:";
 cin>>grno;
 ts2.setgrno(grno);
 }
  cout<<"";
  cout<<"\n Enter third object values:"<<endl;
   cout<<"";
 for(x=1;x<=2;x++)
 {
 cout<<"\nEnter grno:";
 cin>>grno;
 ts3.setgrno(grno);
 }
 cout<<"\n value of first object"<<endl;
 ts1.gettotalstudent();
 cout<<"\n value of second object"<<endl;
 ts2.gettotalstudent();
 cout<<"\n value of third object"<<endl;
 ts3.gettotalstudent();
 getch();
 }















