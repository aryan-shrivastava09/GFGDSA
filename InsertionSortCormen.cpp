#include<iostream>
using namespace std;
int main()
{
    int arr[]= {5,2,4,6,1,3}, n=6, i;
    for(int j = 1;j<n;j++)
    {
        int key = arr[j];
        i=j-1;
        while(i>=0&&arr[i]>key)
        {
            arr[i+1] = arr[i];
            i-=1;
        }
        arr[i+1] = key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
