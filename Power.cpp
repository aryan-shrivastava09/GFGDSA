#include<iostream>
using namespace std;
int main()
{
    int n, a, res=1;
    cout<<"Enter a number and power: "<<endl;
    cin>>n>>a;
    for(int i= 0;i<a;i++)
    {
        res*=n;
    }
    return res;
}
