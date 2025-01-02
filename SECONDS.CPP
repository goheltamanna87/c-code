//1 4 9 10 25....n
#include<iostream.h>
void main()
{
        int n,i=1;
cout<<"\nEnter a number n:";
cin>>n;
cout<<"series:";
     do{
        cout<<i*i<<" ";
        i++;
        }while(i<=n);
}