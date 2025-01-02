#include<iostream.h>
#include<conio.h>
class test
{
   int n;
   void readdata();
   public:
   void inputdata(int a);
};
void main()
{
  clrscr();
  int val;
  cout<<"Enter value:";
  cin>>val;
  test t1,t2,t3;
  t1.inputdata(val);
  cout<<"\nEnter value:";
  cin>>val;
   t2.inputdata(val);
  cout<<"\nEnter value:";
  cin>>val;
  t3.inputdata(val);
  cout<<"\nEnter value:";
  cin>>val;
}
void test::readdata()
{
    cout<<"\nvalue is:"<<n;
}
void test::inputdata(int a)
{
   n=a;
   readdata();
}
