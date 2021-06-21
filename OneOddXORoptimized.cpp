#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,2,4,4,6,6,8,8,10,10,12};
    int res=0;
    for(int i = 0;i<11;i++)
    {
        res = res^arr[i];
    }
    return res;
}
