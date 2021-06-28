#include<iostream>
using namespace std;
int main()
{
    int arr[]= {2,3,1,4,7,5}, n=6;
    for(int i=0;i<n-1;i++)
    {
        int min_ind = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
                min_ind=j;
        }
        swap(arr[min_ind], arr[i]);
        cout<<arr[min_ind]<<endl;
    }
    for(int i:arr)
        cout<<i<<" ";
}
