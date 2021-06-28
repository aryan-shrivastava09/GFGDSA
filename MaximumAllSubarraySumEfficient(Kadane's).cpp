#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,-2,3,4}, n=4, res1=arr[0], res2= arr[0], maxending = arr[0], minending = arr[0], sum = arr[0];
    for(int i =1;i<n;i++)
    {
        maxending = max(maxending + arr[i], arr[i]);
        res1= max(maxending, res1);
        sum+=arr[i];
        minending = min(minending+arr[i], arr[i]);
        res2 = min(minending, res2);
    }
    if(res1<0)
        cout<<res1;
    else
        cout<<max(res1, sum-res2);
}
