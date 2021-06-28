#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,40,1,2}, n =5;
    int swapped = false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
               {
                 swap(arr[j], arr[j+1]);
                 swapped = true;
               }
        }
        if(swapped==false)
            break;
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}
