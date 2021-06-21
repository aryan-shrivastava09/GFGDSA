#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,12,14,7,8}, n=5;
    int res = 1, curr=1;
    for(int i=0;i<n;i++)
    {
        curr= 1;
        for(int j =i;j<n;j++)
        {
            if((arr[j]%2==0&&arr[j-1]%2!=0)||(arr[j]%2!=0&&arr[j-1]%2==0))
                curr++;
            else
                break;
        }
        res = max(res,curr);
    }
    cout<<res;
}
