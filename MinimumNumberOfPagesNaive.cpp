#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int sum(vector<int> v, int b, int e)
{
    int s =0;
    for(int i=b;i<e;i++)
    {
        s+=v[i];
    }
    return s;
}
int minmaxpages(vector<int> v, int n, int k)
{
    if(k==1)
        return sum(v, 0, n);
    if(n==1)
        return v[0];
    int res = INFINITY;
    for(int i=0;i<n;i++)
    {
        res = min(res, max(minmaxpages(v, i, k-1), sum(v,i,n)));
    }
    return res;
}
int main()
{
    vector<int> v = {10,20,10,30};
    int n =4, k=2;
    cout<<minmaxpages(v, n,k);
}
