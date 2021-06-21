#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,4,6,8,10}, n = 5;
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i] = arr[n-1-i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<endl;
    }
}
