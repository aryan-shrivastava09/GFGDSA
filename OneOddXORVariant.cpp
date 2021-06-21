//an array with n numbers that has values in range [1...n+1]. Every no. appears exactly once, hence one no. is missing
// find the missing number.
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,8,9,10,11};
    int res= 0;
    for(int i=0;i<10;i++)
    {
        res^=arr[i];
    }
    for(int i= 1;i<=11;i++)
    {
        res^=i;
    }
    return res;
}
