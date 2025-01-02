//class and object
#include<iostream.h>
#include<conio.h>
class greetings
{
    public:
    char*name;
void getdata (char*nm)
{
    name=nm;
}
void welcomemsg()
{
cout<<"welcome to c++ oop..."<<name;
}
};
void main()
{
   clrscr();
greetings obj;//=new greetings();
char*nm="mjkacc";
obj.getdata(nm);
obj.welcomemsg();
getch();
}