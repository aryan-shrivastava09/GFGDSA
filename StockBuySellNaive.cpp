#include<iostream>
using namespace std;
int maxprofit(int arr[], int start, int e)
{
    int curr_profit = 0, profit = 0;
    if(e<=start)
        return 0;
    for(int i=start;i<e;i++)
    {
        for(int j=i+1;j<=e;j++)
        {
            if(arr[j]>arr[i])
            {
                curr_profit = arr[j]-arr[i] + maxprofit(arr, start, i-1) + maxprofit(arr,j+1, e);
            }
            profit = max(profit, curr_profit);
        }
    }
    return profit;
}
int main()
{
    int arr[] = {1,5,3,8,12}, start = 0, e = 4;
    cout<<maxprofit(arr,start,e);
}
