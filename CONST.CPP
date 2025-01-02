#include<iostream.h>
#include<conio.h>
class constdemo
{
    public:
    void addition(int a,int b)const
    {
    cout<<"\n Addition is:"<<(a+b);
    }
};
void main()
{
   clrscr();
   constdemo cs;
   cs.addition(10,20);
   getch();
}