#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,4,10,20,20,20,30}, n= 8, x = 20;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}
