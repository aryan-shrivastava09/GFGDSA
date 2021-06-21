#include<iostream>
using namespace std;
int main()
{
    int n,a,res=1;
    cout<<"Enter a number and power: "<<endl;
    cin>>n>>a;
    while(a>0)
    {
        if(a%2!=0)
            res = res*n;
        n = n*n;
        a= a/2;
    }
    return res;
}
