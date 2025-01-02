#include<iostream.h>
using namespace std;
void main()
{
   float x,y;
   cout<<"\nEnter first value:";
   cin>>x;
   cout<<"\nEnter second value:";
   cin>>y;
   try
   {
      if(y==0)
   {
      throw runtime_error("value is zero with divisible error...");
   }
   double ans=x/y;
   cout<<"division is:"<<ans;
   }
   catch(const std::exception& e)
   {
cout<<"Error code:"<<cerr<<"error is:"<<e.what()<<'\n';
   }
}