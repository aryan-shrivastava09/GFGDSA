#include<iostream>
using namespace std;
int main()
{
    int m=0,n=0;
    for(int i=0;i<=100;i++)
    {
        if(i%6==0)
            m++;
    }
    for(int i=-6;i<=35;i++)
    {
        if(i%6==0)
            n++;
    }
    return m-n;
}
