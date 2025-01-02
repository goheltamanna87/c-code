#include<iostream.h>
void main()
{
    int c,num,sum=0,digit;
    cout<<"\nEnter an integer number:";
    cin>>c;
    num=c;
    while(c<0)
    {
    digit=c%10;
    sum=sum+digit*digit*digit;
    c=c/10;
    }
    if(num==sum)
    cout<<"\narmstrong number"<<num;
    else
    cout<<"\nnot armstrong number"<<num;
}