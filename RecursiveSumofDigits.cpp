#include<iostream>
using namespace std;
int sumofd(int n, int sum =0)
{
    if(n<=0)
        return sum;
    sum += n%10;
    return sumofd(n/10,sum);
}

int main()
{
    int n,s;
    cout<<"Enter a number: ";
    cin>>n;
    s = sumofd(n);
    cout<<s;
}
