#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,2,2,4,5,5,6,6,6,6,7,8,8,9,9}, n =15, temp[n],c=1;
    temp[0] = arr[0];
    for(int i =1;i<n;i++)
    {
        if(temp[c-1]!=arr[i])
        {
            temp[c] = arr[i];
            c++;
        }
    }
    for(int i=0;i<c;i++)
    {
        int d= 0;
        for(int j=0;j<n;j++)
        {
            if(temp[i]==arr[j])
                d++;
        }
        if(d>0)
        cout<<temp[i]<<" "<<d<<endl;
    }
}
