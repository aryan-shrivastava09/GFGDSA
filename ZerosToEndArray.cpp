#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,2,3,0,3,5,0,1,5,6,0}, n =11;
    for(int i =0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j = i+1;j<n;j++)
            {
                if(arr[j]!=0)
                    swap(arr[i],arr[j]);
            }
        }
    }
    for(int i:arr)
    {
        cout<<i<<endl;
    }
}
