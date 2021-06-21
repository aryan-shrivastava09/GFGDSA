#include<iostream>
using namespace std;
int sum(int n, int i =0)
{
    if(n==0)
        return i;
    return sum(n-1,i+n);
}
int main()
{
    int add = sum(4);
    cout<<add<<endl;
}
