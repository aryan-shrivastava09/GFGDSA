#include<iostream>
using namespace std;
int firstocc(int arr[], int x, int low, int high)
{
    int mid = (low+high)/2;
    if(low>high)
        return -1;
    if(arr[mid]>x)
        return firstocc(arr,x,low,mid-1);
    else if(arr[mid]<x)
        return firstocc(arr,x,mid+1, high);
    else
    {
        if(arr[mid-1]!=arr[mid]||mid==0)
            return mid;
        else
            return firstocc(arr,x,low,mid-1);
    }
}
int main()
{
    int arr[] = {1,2,4,10,20,20,20,30}, n= 8, x = 20;
    int low = 0, high = n-1;
    cout<<firstocc(arr,x,low,high);
}
