#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,0,0,0,0,1,1,1,1,1}, n=10;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            return n-i;
    }
    return 0;
}
