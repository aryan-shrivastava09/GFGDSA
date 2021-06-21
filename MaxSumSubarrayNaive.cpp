#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,-8,7,-1,2,3}, n = 7, res = 0, curr = 0;
    for(int i=0;i<n;i++)
    {
        curr = 0;
        for(int j=i;j<n;j++)
        {
            curr+=arr[j];
            res = max(res,curr);
        }
    }
    cout<<res;
}
