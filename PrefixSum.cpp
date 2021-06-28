#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,8,3,9,6,5,4}, n=7, sum =0, pf[n];
    for(int i=0;i<n;i++)
    {
        sum +=arr[i];
        pf[i] = sum;
    }
    for(int i:pf)
    {
        cout<<i<<" ";
    }
}
