#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    for(i = 1;i*i<n;i++)
    {
        if(n%i==0)
            cout<<i<<endl;
    }
    for(;i>=1;i--)
    {
        if(n%i==0)
            cout<<n/i<<endl;
    }
}
