#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,30,40,50,60,70,70,80}, n=10, x = 50;
    int low = 0, high =n-1, mid = (low +high)/2;
    while(low<=high)
    {
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
          {
             high = mid-1;
             mid = (low+high)/2;
          }
          else
          {
              low = mid+1;
              mid = (low+high)/2;
          }
    }
    return -1;
}
