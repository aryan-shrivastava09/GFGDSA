#include<iostream>
using namespace std;
int insertarray(int arr[], int n, int x, int cap,int pos)
{
    if(n==cap)
        return n;
    int ipx = pos-1;
    for(int i=n-1;i>idx;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[idx] = x;
    return n+1;
}
