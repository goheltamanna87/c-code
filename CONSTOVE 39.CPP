#include<iostream.h>
#include<conio.h>
class constover
{
   public:
   int grno;
   constover()
   {
   cout<<"\n Hii I am default constructor...";
   }
   constover(int grno)
   {
     constover::grno=grno;
     cout<<"\nconstructer one parameter:"<<grno;
   }
   constover(int grno,char *nm)
   {
   constover::grno=grno;
   cout<<"\nconstructer two parameter:";
   cout<<"\n grno is:"<<grno<<"and student name is:"<<nm;
   }
};
void main()
{
   constover co1;
   constover co2(234);
   constover co3(2334,"nandani");
   getch();
}



