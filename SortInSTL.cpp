#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {10,5,100,30}, n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
    for(int x:arr)
    {
        cout<<x<<" ";
    }
}
