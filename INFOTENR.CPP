#include<iostream.h>
#include<conio.h>
class stud_info
{
   public:
   int grno;
   char stnm[20],city[15],conno[10],gender[6];
void inputdata()
   {
    cout<<"Enter grno:";
    cin>>grno;
    cout<<"Enter student name:";
    cin>>stnm;
    cout<<"Enter city:";
    cin>>city;
    cout<<"Enter contact number:";
    cin>>conno;
    cout<<"Enter gender:";
    cin>>gender;
   }
void displaydata()
{
  cout<<"\n"<<grno<<"\t"<<stnm<<"\t"<<city<<"\t"<<conno<<"\t"<<gender<<"\n";
}
};
void main()
{
  clrscr();
  stud_info s[10];
  for(int x=0;x<10;x++)
  {
  s[x].inputdata();
  }
cout<<"\n Grno \t student name \t city \t contact number \t gender";
    for(x=0;x<10;x++)
    {
     s[x].displaydata();
    }
}
