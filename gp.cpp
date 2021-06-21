#include<iostream>
using namespace std;
int main()
{
    int A,B,N;
    cin>>A>>B>>N;
    int r,d;
    r = B/A;
    d=r;
    if(N==1)
        return A;
    if(N==2)
        return B;
    for(int i =3;i<=N;i++)
    {
        d*=r;
    }
    return A*d;
}
