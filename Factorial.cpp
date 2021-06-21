#include<iostream>
using namespace std;
long int recursivef(int n)
{
    if(n==0)
        return 1;
    else
        return n*recursivef(n-1);
}

int iterativef(int n)
{
    long int f = 1;
    for(int i =n;i>1;i--)
    {
        f*=i;
    }
    return f;
}

int main()
{
    int n,r,i;
    cout<<"Input a number: ";
    cin>>n;
    r = recursivef(n);
    cout<<r<<endl;
    i = iterativef(n);
    cout<<i<<endl;
}
