#include<iostream>
using namespace std;
int max(int a, int b, int c)
{
    if(a>=b)
    {
        if(a>=c)
            return a;
        else
            return c;
    }
    else if(b>=a)
    {
        if(b>=c)
            return b;
        else
            return c;
    }
}
int maxPieces(int n, int a, int b, int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    int res = max(maxPieces(n-a,a,b,c),maxPieces(n-b,a,b,c),maxPieces(n-c,a,b,c));
    if(res==-1)
        return -1;
    return res+1;
}
int main()
{
    int n,a,b,c;
    cout<<"Enter a number, and a,b,c: ";
    cin>>n>>a>>b>>c;
    cout<<"Result: "<<maxPieces(n,a,b,c);
}
