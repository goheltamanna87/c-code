#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream ofs("new file.txt");
ifstream ifs;
ifs.open("bcamfile copy.cpp");
char c;
while(ifs)
{
  c=ifs.get();
ofs.put(c);
}
cout<<"file copied!!!!!!";
ifs.close();
ofs.close();
}
