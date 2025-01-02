#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
     ofstream filew("bcamorning.txt");
     clrscr();
     char*input;
cout<<"enter your message:";
cin>>input;
filew<<input;
cout<<endl<<"file data written...";
filew.close();
getch();
}