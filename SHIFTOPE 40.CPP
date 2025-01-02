#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class shiftopr
{
    public:
    void operator<<(char  *c)
    {
      puts(c);
      puts("Thank you...");
    }
    void operator>>(char  *c)
    {
      puts(c);
      puts("Thank you...");
    }
};
void main()
{
   shiftopr cout,cin;
   clrscr();
   cout<<"\n good morning";
   char *c="good byee";
   cin>>c;
   getch();
}