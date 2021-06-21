#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,2,4,4,6,6,8,8,10,10,12};
    for(int i = 0; i<11;i++)
    {
        int c= 0;
        for(int j =0;j<11;j++)
        {
            if(arr[i]==arr[j])
                c++;
        }
        if(c%2!=0)
            cout<<arr[i];
    }
}
