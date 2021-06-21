#include<iostream>
using namespace std;
int secondlargest(int arr[], int n)
{
    int pos = 0,spos=-1;
    for(int i = 1; i<n; i++)
    {
        if(arr[i]>arr[pos])
        {spos = pos;
            pos = i;}
        else if(arr[i]>arr[spos]&&arr[i]<arr[pos])
            spos = i;
    }
    return spos;
}
int main()
{
    int arr[]={2,4,6,8,10,12,67,7,8,9,1,2};
    int n = 12;
    cout<<"Second Largest: "<<secondlargest(arr,n);
}
