#include<iostream.h>
#include<fstream.h>
#include<conio.h>
//using namespace std;
void main()
{
char*c;
ofstream file1("abc.txt");
cout<<"enter your string:";
//gets(c);
cin>>c;
file1<<"good morning";//file1<<c;
cout<<"file data wrritten successfully...";
file1.close();
}