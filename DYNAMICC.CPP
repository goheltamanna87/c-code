#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class arrmem
{
   public:
   int*p;
   arrmem()
   {
    p=new int[5];
    for(int x=0;x<5;x++)
	  p[x]=rand()/100;
    for(x=0;x<5;x++)
	  cout<<p[x]<<"\t";
    delete p;
   }
   arrmem(int n)
   {
    p=new int[n];
    for(int x=0;x<n;x++)
	  p[x]=rand()/100;
    for(x=0;x<n;x++)
    cout<<p[x]<<endl;
    delete p;
   }
   ~arrmem()
   {
     delete p;
     cout<<"\n destructor execute successfully....";
   }
};
void main()
{
   clrscr();
   arrmem am1;
   int n;
   cout<<"Enter no. of element:";
   cin>>n;
   arrmem am2(n);
   cout<<"\n dynamic constructor array:"<<endl;
   arrmem*am3=new arrmem[5];
   getch();
}

