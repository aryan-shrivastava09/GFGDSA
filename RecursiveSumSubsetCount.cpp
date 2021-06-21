#include<iostream>
using namespace std;
int countSubsets(int arr[], int n, int sum)
{
    if(n==0)
        return (sum==0)?1:0;
    return countSubsets(arr,n-1,sum) + countSubsets(arr,n-1,sum-arr[n-1]);
}

int main()
{
    int arr[]= {2,4,6,8,10}, n = 5;
    cout<<countSubsets(arr,n,6);
}
