#include<iostream>
using namespace std;
int remdup(int arr[],int n)
{
    int res= 1;
    for(int i=0;i<n;i++)
    {
        if(arr[res-1]!=arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[]={2,2,2,4,6,6,6,8}, n = 8;
    cout<<remdup(arr,n);
}
