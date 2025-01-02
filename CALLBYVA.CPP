//call by value
#include<iostream.h>
#include<conio.h>

void swapping(int first,int second)
{
   first = first + second;
   second = first - second;
   first = first - second;
cout<<"After swapping first value is:"<<first<<"\nand second value is:"<<second;
}

void main()
{
    int mainvalue1,mainvalue2;
    clrscr();
cout<<"Enter first value:";
cin>>mainvalue1;
cout<<"Enter second value:";
cin>>mainvalue2;
swapping(mainvalue1,mainvalue2);
getch();
}