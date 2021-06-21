#include<iostream>
using namespace std;
int main()
{
    int n,d=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
        d+=n&1;
        n=n>>1;
    }
    return d;
}
