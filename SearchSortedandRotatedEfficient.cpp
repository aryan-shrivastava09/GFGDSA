#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50,60,8,9}, x = 30, n=7;
    int low =0, high =n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[low]<arr[mid])
        {
            if(arr[low]<=x&&arr[mid]>x)
                high = mid-1;
            else
                low = mid+1;
        }
        else
        {
            if(arr[mid]<x&&arr[high]>=x)
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}
