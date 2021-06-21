#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,4,6,8,10}, n = 5;
    int low = 0, high = n-1,temp;
    while(low<high)
    {
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
