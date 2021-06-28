#include<iostream>
#include<vector>
using namespace std;
int tp(vector<int> v, int x, int low, int high)
{
    while(low<high)
    {
        int sum = v[low] + v[high];
        if(sum==x)
            return 1;
        else if(sum>x)
            high--;
        else
            low++;
    }
    return 0;
}
int main()
{
    vector<int> v = {2,3,4,8,9,20,40};
    int n=7,x =32, c;
    for(int i=0;i<n;i++)
    {
        c = tp(v,x-v[i], i+1,n-1);
        if(c==1)
            return 1;
    }
        return 0;
}
