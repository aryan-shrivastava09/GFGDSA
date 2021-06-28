#include<iostream>
using namespace std;
int binary(int arr[],int x, int low, int high)
{
    int mid = (low+high)/2;
    if(low>high)
        return -1;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x)
        return binary(arr,x,low,mid-1);
    else
        return binary(arr,x,mid+1,high);
}
int main()
{
    int arr[] = {10,20,30,30,40,50,60,70,70,80},n=10, x = 50;
    int low = 0, high =n-1;
    cout<<binary(arr,x,low,high);
}
