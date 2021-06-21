#include<iostream>
using namespace std;
long long unsigned factorial(int a)
{
    long long unsigned f=1;
    for(int i = 1;i<=a;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;
    return factorial(n);
}
