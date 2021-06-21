#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,1,10,2,3,4,1,3,2}, n = 10, md=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[j]-arr[i])>md)
            {
                md = arr[j] - arr[i];
            }
        }
    }
    cout<<md<<endl;
}
