#include<iostream>
using namespace std;
int power(int x, int a)
{
    if(a==0)
        return 1;
    int temp = power(x,a/2);
    temp = temp*temp;
    if(a%2==0)
        return temp;
    else
        return temp*x;
}
int main()
{
    int n, a,res;
    cout<<"Enter a number and power: "<<endl;
    cin>>n>>a;
    res = power(n,a);
    return res;
}
