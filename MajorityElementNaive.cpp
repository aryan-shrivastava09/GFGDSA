#include<iostream>
using namespace std;
int main()
{
    int arr[] = {8,8,6,6,6,4,6}, n=7, c =0, mi=0;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                c++;
        }
        if(c>n/2)
            mi = i;
    }
    cout<<mi;
}
