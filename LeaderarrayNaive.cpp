#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,1,10,2,3,4,1,3,2}, n = 10,c;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
                c++;
        }
        if(c==0)
            cout<<arr[i]<<endl;
    }
}
