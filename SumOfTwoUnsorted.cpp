#include<iostream>
using namespace std;
int main()
{
    int arr[] = {3,5,9,2,8,10,11},n= 7, x = 17;
    for(int i = 0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
         {
             if(arr[i]+arr[j]==x)
                return 1;
         }
    }
    return 0;
}
