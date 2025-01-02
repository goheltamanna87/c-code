//6 9 13 21 30....n
#include <iostream.h>
void main()
{
    int n;
    cout << "\nEnter the value of n: ";
    cin >> n;
        int a=6,b=9,c;
    for (int i=3;i<=n;++i)
    {
    c=a+b+i;
    cout<<c<<" ";
    a=b;
    b=c;
    }
}