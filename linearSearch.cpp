#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,30,40,50,60,70,70,80}, n=10, x = 50;
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == x)
            return i;
    }
    return -1;
}
