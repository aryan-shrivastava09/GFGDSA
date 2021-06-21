#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,1,1,1,1,0,1,1,1,1,1,0,0,1,1}, n = 15, c=0, m=0;
    for(int i =0;i<n;i++)
    {
        if(arr[i]==1)
       {
           c++;
           m= max(c,m);
       }
       else
        c=0;
       }
    cout<<m;
}
