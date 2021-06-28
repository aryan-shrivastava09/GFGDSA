#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,3,2,4,6,5,7,3}, n = 9;
    int slow = arr[0]+1, fast = arr[0]+1;
    do
    {
        slow = arr[slow]+1;
        fast = arr[arr[fast]] + 1;
        cout<<slow<<" "<<fast;
    }while(slow!=fast);
    slow = arr[0]+1;
    while(slow!=fast)
    {
        slow = arr[slow] +1;
        fast = arr[fast]+1;
        cout<<slow<<" "<<fast;
    }
    return slow-1;
}
