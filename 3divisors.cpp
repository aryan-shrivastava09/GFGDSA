#include<iostream>
using namespace std;
int divisors(int a)
{
    int d = 0;
    for(int i =1;i*i<=a;i++)
    {
        if(a%i==0)
        {if(i!=a/i)
            d+=2;
        else
            d++;
        }
    }
    return d;
}

int main()
{
    long int n;
    int b=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=4;i<=n;i++)
    {
        if(divisors(i)==3)
            b++;
    }
    return b;
}
/*     int isPrime(int a)
    {
        if(a==1)
        return false;
        if(a==2||a==3)
        return true;
        if(a%2==0||a%3==0)
        return false;
        for(int i = 5;i*i<=a;i+=6)
        {
            if(a%i==0||a%(i+2)==0)
            return false;
        }
        return true;
    }
    int exactly3Divisors(int N)
    {
        int d = 0
        for(int i = 2;i*i<=N;i++)
        {
            if(isPrime(i))
            {
                if(i*i<=N)
                d++;
            }
        }
        return d;//Your code here
    }
}; */
