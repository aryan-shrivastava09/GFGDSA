#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,-8,7,-1,2,3}, n=7, maxending =0, res = 0;
    for(int i=0;i<n;i++)
    {
        maxending = max(maxending+arr[i], arr[i]);
        res = max(maxending, res);
    }
    cout<<res;
}
