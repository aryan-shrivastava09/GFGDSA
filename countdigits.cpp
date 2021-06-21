#include<iostream>
using namespace std;
int main()
{
    int n, d=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
        d++;
        n/=10;
    }
    cout<<"No. of digits = "<<d<<endl;
}
