#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    while(n!=1)
    {
        if(n%2!=0)
            return false;
        n=n/2;
    }
    return true;
}
