#include<iostream>
using namespace std;
int main()
{
    int n,n1,rev = 0,d,i=0;
    cout<<"Enter a number: ";
    cin>>n;
    n1 = n;
    while(n!=0)
    {
        d = n%10;
        rev = rev*10+d;
        n/=10;
        i++;
    }
    if(rev==n1)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
}
