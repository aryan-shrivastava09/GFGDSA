#include<iostream>
using namespace std;
int main()
{
    int n,res=0;
    long int f=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 2;i<=n;i++)
    {
        f*=i;
    }
    while(f%10==0)
    {
        res++;
        f/=10;
    }
    cout<<"No. of trailing zeros in factorial = "<<res<<endl;
}
