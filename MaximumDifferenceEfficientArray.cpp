#include<iostream>
using namespace std;
int main()
{
    int arr[] ={2,3,1,10,2,3,4,1,3,2}, n = 10, minvalue = arr[0], res = arr[1]-arr[0];
    for(int i=0;i<n;i++)
    {
        res = max(res,arr[i]-minvalue);
        minvalue= min(arr[i], minvalue);
    }
    cout<<res<<endl;
}
