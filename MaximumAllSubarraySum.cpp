#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,-2,3,4},n=4, res = arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_sum = 0;
        int curr_max = 0;
        for(int j=1;j<n;j++)
        {
            int index = (i+j)%n;
            curr_sum += arr[index];
            curr_max = max(curr_max, curr_sum);
        }
        res = max(res, curr_max);
    }
    cout<<res;
}
