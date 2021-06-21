#include<iostream>
using namespace std;
int main()
{
    int n, d=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
        n=n&(n-1);
        d++;
    }
    return d;
}
