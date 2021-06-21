#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,2,2,4,5,5,6,6,6,6,7,8,8,9,9}, n =15, i=1, freq=1;
    while(i<n)
    {
        while(i<n&&arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq =0;
    }
    if(n==1||arr[n-1]!=arr[n-2])
    {
        cout<<arr[n-1]<<" "<<1<<endl;
    }
}
