#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,15,12,3,4,6},n = 7;
    int low = 0, high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if((mid==0||arr[mid-1]<=arr[mid])&&(mid==n-1||arr[mid+1]<=arr[mid]))
            return arr[mid];
        else if(mid>0&&arr[mid-1]>arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}
