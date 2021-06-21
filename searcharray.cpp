#include<iostream>
using namespace std;
int arraySearch(int arr[], int n, int x)
{
    for(int i = 0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}
int main()
{
    int arr[] = {2,4,6,8,10,12,14,16}, n = 8, x = 12;
    int pos = arraySearch(arr,n,x);
    cout<<pos;
}
