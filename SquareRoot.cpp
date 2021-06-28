#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    int i=1;
    while(i*i<=x)
    {
        i++;    }
    return i-1;
}
