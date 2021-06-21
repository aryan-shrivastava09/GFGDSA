#include<iostream>
using namespace std;
int largest(int arr[], int n)
{
    int pos = 0;
    for(int i =1;i<n;i++)
    {
        if(arr[i]>arr[pos])
            pos = i;
    }
    return pos;
}
int main()
{
    int arr[]= {2,4,6,8,20,5,6,7,8};
    int n = 9;
    cout<<largest(arr,n);
}
