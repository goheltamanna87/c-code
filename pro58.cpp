#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char* data=" ";
ifstream ifs;
ifs.open("abc.txt");
cout<<"\n your file pointer position is:"<<ifs.tellg()<<endl;
ifs>>data;
cout<<data;
cout<<"your file pointer position is:"<<ifs.tellg()<<endl;
cout<<"\n single data reading\n";
char c;
while(ifs)
{
c=ifs.get();
cout<<c;
}
cout<<"\n your file ponitre position is:"<<ifs.tellg();
ifs.close();
return 0;
}