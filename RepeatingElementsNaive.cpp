#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,1,2,2,2,3}, n = 6;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
                c++;
        }
        if(c>1)
            return arr[i];
    }
}
