#include <iostream.h>
void main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int  a=1,b=3,c;
    cout<<a<<" "<<b<<" ";
    for (int i = 2; i < n; ++i)
    {
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
    }
}