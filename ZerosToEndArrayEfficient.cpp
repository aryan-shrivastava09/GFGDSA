#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,0,3,4,0,5,6,7,0,1,0}, n = 11,c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[c]);
            c++;
        }
    }
    for(int i:arr)
    {
        cout<<i<<endl;
    }
}
