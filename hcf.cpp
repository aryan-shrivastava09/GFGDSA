#include<iostream>
using namespace std;
int main()
{
    int n1,n2,hcf,m;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    m = min(n1,n2);
    for(int i=1;i<=m;i++)
    {
        if(n1%i==0&&n2%i==0)
            hcf=i;
    }
    cout<<"HCF: "<<hcf<<endl;
}
