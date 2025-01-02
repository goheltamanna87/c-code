#include<iostream.h>
#include<conio.h>
//without argument without return
void rectangle();
void triangle();
void circle();
float length,hight,redius;
 void main()
 {
     clrscr();
 cout<<"Enter Lenght:";
    cin>>length;
 cout<<"Enter hight:";
    cin>>hight;
 cout<<"Enter radius:";
    cin>>redius;
    rectangle();
    triangle();
    circle();
    getch();
 }
 void rectangle()
 {
 cout<<"Length of rectangle is:"<<length<<endl;
  cout<<"height of rectangle is:"<<hight<<endl;
  float area=length*hight;
 cout<<""<<endl;
 cout<<"area of rectangle:"<<area<<endl;
 }
 void triangle()
 {
 cout<<"Length of triangle is:"<<length<<endl;
  cout<<"height of triangle is:"<<hight<<endl;
  cout<<""<<endl;
 cout<<"area of triangle:"<<(1.0/2.0*length*hight)<<endl;
 }
 void circle()
 {
 cout<<"radius of circle is:"<<redius<<endl;
  cout<<""<<endl;
  cout<<"area of circle:"<<(3.14*redius*redius)<<endl;
 }






