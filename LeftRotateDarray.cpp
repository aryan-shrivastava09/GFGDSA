#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9}, n = 10, d= 3;
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i] = arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i] = arr[i+d];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i] = temp[i];
    }
    for(int i:arr)
    {
        cout<<i<<endl;
    }
}
