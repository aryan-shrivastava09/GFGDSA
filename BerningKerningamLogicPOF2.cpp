#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(n==0)
        return false;
    return (n&(n-1)==0);
}
