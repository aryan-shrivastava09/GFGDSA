#include<iostream>
using namespace std;
int remdup(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for(int i =0;i<n;i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for(int i= 0;i<res;i++)
    {
        arr[i] = temp[i];
    }
    return res;
}
int main()
{
    int arr[] = {2,2,2,4,6,6,6,8}, n=8;
    cout<<remdup(arr,n);
}
