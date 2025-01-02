#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
void main()
{
  struct stud
  {
     int grno;
     char *stnm,*result;
     double per;
  };
  struct stud s1[3];
  clrscr();
  for(int i=0;i<1;i++)
  {
  clrscr();
  flushall();
  cout<<"Enter grno:";
  cin>>s1[i].grno;
  cout<<"Enter student name:";
 gets(s1[i].stnm);//cin>>s1[i].stnm;
  cout<<"Enter Result:";
 gets(s1[i].result); //cin>>s1[i].result;
   cout<<"Enter percentage:";
  cin>>s1[i].per;
  }
  cout<<"\n grno"<<setw(20)<<"student name"<<setw(30)<<"result"<<setw(20)<<"percentage";
    for(i=0;i<1;i++)
  {
  cout<<setfill(' ');
  cout<<endl<<s1[i].grno<<setw(20)<<s1[i].stnm
  <<setw(30)<<s1[i].result<<setw(20)<<setprecision(2)<<s1[i].per;
  }
  getch();
}


