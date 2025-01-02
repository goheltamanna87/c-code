//sum of 5 digit
#include<iostream.h>
void main()
{
     int x,sum=0;
     cout<<"Enter a number:";
     cin>>x;
     while(x>0)
     {
     sum=sum+x%10;
     x=x/10;
     }
     cout<<"\n sum of"<<sum,x;
}
