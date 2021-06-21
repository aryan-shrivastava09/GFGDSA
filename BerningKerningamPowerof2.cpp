#include<iostream>
using namespace std;
int main()
{
    int n,d=0;
    cout<<"enter a number: ";
    cin>>n;
    while(n>0)
    {
        n=n&(n-1);
        d++;
    }
    if(d==1)
        cout<<"Power of 2";
    else
        return -1;
}
