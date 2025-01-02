#include<iostream.h>
#include<conio.h>
void sum(int a, int b=20, int c=10)
{
cout<<"sum of A and B is:"<<(a+b+c)<<endl;
}
void main()
{
    clrscr();
    sum(100,200);
    sum(50);
    //sum();
    sum(20,20,20);
    sum(20,50);
    getch();
}