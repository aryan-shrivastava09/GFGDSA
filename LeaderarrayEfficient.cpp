#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,1,10,2,3,4,1,3,2}, n = 10, c= arr[n-1];
    cout<<c<<endl;
    for(int i=n-2;i>=0;i--)
    {
        if(c<arr[i])
        {
            c=arr[i];
            cout<<c<<endl;
        }
    }
}
