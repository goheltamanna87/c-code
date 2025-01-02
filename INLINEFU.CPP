 //inline function
 #include<iostream.h>
 #include<conio.h>
 inline void calculatessum(int x,int y)
 {
 cout<<"sum of x and y is:"<<(x+y)<<endl;
 }
 void main()
 {
   int first,second;
   clrscr();
 cout<<"Enter first value:";
 cin>>first;
  cout<<"Enter second value:";
 cin>>second;
calculatessum(first,second);
calculatessum(55,22);
calculatessum(100,200);
getch();
}
