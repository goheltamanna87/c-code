#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char* data="";
ifstream ifs;
ifs.open("abc.txt");
//while(ifs){
ifs>>data;
//cout<<"\n file data is:"<<endl;
cout<<data;
//}
/*while(ifs)
{
ifs.getline(ifs,data);
//cout<<"\n file data is:"<<endl;
cout<<data;
}*/
cout<<"\n single data reading\n";
char c;
while(ifs)
{
  c=ifs.get();
  //cout<<"|n file data is:"<<endl;
  cout<<c;
  }
  ifs.close();
  return 0;
}