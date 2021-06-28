#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50,8,9}, x=30, n=7;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}
