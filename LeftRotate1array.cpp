#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,4,6,8,10}, n =5;
    int f = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = f;
    for(int i:arr)
    {
        cout<<i<<endl;
    }
}
