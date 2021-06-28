#include<iostream>
using namespace std;
int lastocc(int arr[], int x, int n, int low, int high)
{
    int mid = (low+high)/2;
    if(low>high)
        return -1;
    if(arr[mid]>x)
        return lastocc(arr,x,n,low,mid-1);
    else if(arr[mid]<x)
        return lastocc(arr,x,n,mid+1,high);
    else
    {
        if(arr[mid+1]!=arr[mid]||mid==n-1)
            return mid;
        else
            return lastocc(arr,x,n,mid+1,high);
    }
}
int main()
{
    int arr[] = {1,2,4,10,20,20,20,30}, n= 8, x = 20;
    int low=0, high = n-1;
    cout<<lastocc(arr,x,n,low,high);
}
