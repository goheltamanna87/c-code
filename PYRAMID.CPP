//pyramid of diamond
#include<iostream.h>
#include<conio.h>
void diamond(int n)
{
   int j=0,k=0;
   for(int i=1;i<n;i++)
   {
   for(int j=1;j<=n-i;j++)
   {
       cout<<" ";
   }
   for(int k=1;k<=2*i-1;k++)
   {
      cout<<"*";
   }
   cout<<endl;
   }
   for(i=1;i<=n-1;i++)
   {
    for(j=1;j<=i;j++)
    {
	cout<<" ";
    }
   for(k=1;k<=2*(n-i)-1;k++)
   {
   cout<<"*";
   }
   cout<<endl;
   }
}
void main()
{
   int n=10;
   diamond(n);
}