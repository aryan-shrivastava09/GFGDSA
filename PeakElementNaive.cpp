#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,10,20,15,7}, n = 5;
    if(n==1)
        return arr[0];
    if(arr[0]>=arr[1])
        return arr[0];
    if(arr[n-1]>= arr[n-2])
        return arr[0];
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1])
            return arr[i];
    }
    return -1;
}
