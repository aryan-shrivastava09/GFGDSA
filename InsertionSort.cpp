#include<iostream>
using namespace std;
int main()
{
    int arr[] = {3,2,1,4,5,7,6}, n= 7;
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i:arr)
        cout<<i<<" ";
}
