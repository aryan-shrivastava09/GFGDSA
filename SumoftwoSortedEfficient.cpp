#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,5,8,12,30}, n =5, x=17, low= 0, high = n-1;
    while(low<high)
    {
        int sum = arr[low] + arr[high];
        if(sum==x)
            return 1;
        else if(sum>x)
            high--;
        else
            low++;
    }
    return 0;
}
