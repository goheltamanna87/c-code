#include<iostream.h>
void main()
{
   int age;
  cout<<"\nenter your age:";
  cin>>age;
  if(age<0)
  {
  cout<<"\nInvalid age entered.";
  }
  else if(age<=12)
  {
  cout<<"\nyou are a child.";
  }
   else if(age<=18)
  {
  cout<<"\nyou are a teenager.";
  }
   else if(age<=30)
  {
  cout<<"\nyou are a young.";
  }
   else if(age<=50)
  {
  cout<<"\nyou are a younger.";
  }
   else
  {
  cout<<"\nyou are a old.";
  }

}



