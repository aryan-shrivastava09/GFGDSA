#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==1)
        return false;
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
