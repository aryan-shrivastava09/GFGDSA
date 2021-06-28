#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,0,0,0,0,1,1,1,1,1}, n=10, low=0,high=n-1,mid=(low+high)/2;
    while(low<=high)
    {
        if(arr[mid]==0)
        {
            low = mid+1;
            mid = (low+high)/2;
        }
        else
        {
            if(arr[mid-1]==0||mid==0)
                return n-mid;
            else
                {
                    high = mid-1;
                    mid = (low+high)/2;
                }
        }
    }
    return 0;
}
