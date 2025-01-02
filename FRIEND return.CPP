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
 friend mycale sum(mycale m1,mycale m2)
 {
 mycale m3;
 m3.val=m1.val+m2.val;
 return m3;
 }
};
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
  c3=sum(c1,c2);
  cout<<"sum is"<<c3.val;
      getch();
}