#include<iostream>
using namespace std;
int isPrime(int a)
{
    if(a==1)
        return false;
    if(a==2||a==3)
        return true;
    if(a%2==0||a%3==0)
        return false;
    for(int i=5;i*i<=a;i=i+6)
    {
        if(a%i==0||a%(i+2)==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
            cout<<i<<endl;
    }
}
