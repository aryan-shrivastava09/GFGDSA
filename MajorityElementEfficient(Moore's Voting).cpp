#include<iostream>
using namespace std;
int main()
{
    int arr[] = {8,8,6,6,6,4,6}, n=7, c =1, res = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
            c++;
        else
            c--;
        if(c==0)
        {
            res =i;
            c=1;
        }
    }
    c = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[res] == arr[i])
            c++;
    }
    if(c<=n/2)
        res = -1;
    cout<<res;
}
