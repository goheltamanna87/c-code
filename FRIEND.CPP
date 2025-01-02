#include<iostream.h>
#include<conio.h>
class mycale
{
   public:
   int val;
    void inputdata(int v)
    {
       val=v;
    }
 friend void sum(mycale m1,mycale m2);
 };
 void sum(mycale m1,mycale m2)
 {
 cout<<"sum of two class object value is:"<<(m1.val+m2.val);
 }
void main()
{
  int value;
  clrscr();
  mycale c1,c2,c3;
  cout<<"Enter value:";
  cin>>value;
  c1.inputdata(value);
  cout<<"Enter value:";
  cin>>value;
  c2.inputdata(value);
  sum(c1,c2);
      getch();
}