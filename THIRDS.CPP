//2 5 10 17 26......n
#include<iostream.h>
void main()
{
        int n;
cout<<"\nEnter a number n:";
cin>>n;
  int num=2;
   for(int i=0;i<n;++i)
   {
   cout<<num<<" ";
   num += i+3;
   }
}