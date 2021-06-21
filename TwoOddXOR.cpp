#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,6,6,8,8,10,10,12,12,4};
    for(int i=0;i<10;i++)
    {
        int c= 0;
        for(int j = 0;j<10;j++)
        {
            if(arr[i]==arr[j])
                c++;
        }
        if(c%2!=0)
            cout<<arr[i]<<" ";
    }
}
