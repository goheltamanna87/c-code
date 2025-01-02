#include <iostream.h>
void main()
{
    int n,fi=0,se=1,next;
    cout << "\nEnter the number of terms for the fibonacci series:";
    cin >> n;
    cout<<"\nfibonacci series:";
    for (int i=0;i<n;++i)
    {
    if(i<=1)
    next=i;
    else{
    next=fi+se;
    fi=se;
    se=next;
    }
    cout<<next<<" ";
    }
}
