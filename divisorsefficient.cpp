#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            if(i!=n/i)
            {
                cout<<n/i<<endl;
            }
        }
    }
}
