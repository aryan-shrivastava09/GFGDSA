#include<iostream>
using namespace std;
int main()
{
    int res = 0, n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i =5;i<=n;i*=5)
    {
        res=res+n/i;
    }
    cout<<"Number of trailing zeroes: "<<res<<endl;
}
