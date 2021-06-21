#include<iostream>
using namespace std;
int isprime(int a)
{
    if(a==1)
        return false;
    if(a==2||a==3)
        return true;
    if(a%2==0||a%3==0)
        return false;
    for(int i =5;i*i<=a;i+=6)
    {
        if(a%i==0||a%(i+2)==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(isprime(i))
        {   int x = i;
            while(n%x==0)
            {
                cout<<i<<endl;
                x*=i;
            }
        }
    }
}
