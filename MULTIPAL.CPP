//multipal inheritence...
#include<iostream.h>
#include<conio.h>
class demoa
{
   public:
   void dispalya()
   {
    cout<<"\n good morning from demoa constructor...";
   }
};
class demob
{
   public:
  void  displayb()
    {
    cout<<"\n good morning from demob constructor...";
   }

};
class democ: public demoa,public bemob
{
   public:
   void  displayc()

   {
    cout<<"\n good morning from democ constructor...";
   }

};
void main()
{
   clrscr();
   democ obj;
   obj.displaya();
   obj.displayb();
   obj.displayc();
   getch();
}