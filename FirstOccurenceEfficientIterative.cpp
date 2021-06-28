#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,4,10,20,20,20,30}, n= 8, x = 20;
    int low = 0, high = n-1, mid = (low+high)/2;
    while(low<=high)
    {
        if(arr[mid]==x)
        {
            if(arr[mid-1]!=arr[mid]||mid==0)
                return mid;
            else
                {
                    high = mid-1;
                    mid = (low+high)/2;
                }
        }
        else if(arr[mid]>x)
        {
            high = mid-1;
            mid= (low+high)/2;
        }
        else
        {
            low = mid+1;
            mid=(low+high)/2;
        }
    }
    return -1;
}
