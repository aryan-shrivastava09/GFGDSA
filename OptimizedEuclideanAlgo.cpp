#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int n1,n2,hcf;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    hcf = gcd(n1,n2);
    cout<<"HCF: "<<hcf;
}
