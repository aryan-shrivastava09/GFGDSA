#include<iostream>
#include<vector>
using namespace std;
bool isfeasible(vector<int> v,int n,int k,int ans)
{
    int req = 1, sum=0;
    for(int i =0;i<n;i++)
    {
        if(sum+v[i]>ans)
            {
                req++;
                sum = v[i];
            }
        else
            sum+=v[i];
    }
    return req<=k;
}
int main()
{
    vector<int> v = {10,20,10,30};
    int n=4,k =2, sum=0, mx =v[0];
    vector<int>::iterator i = v.begin();
    for(i=v.begin();i!=v.end();i++)
    {
        sum+=*i;
        mx = max(mx,*i);
    }
    int low = mx, high = sum, res=0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(isfeasible(v,n, k, mid))
        {
            res = mid;
            high = mid-1;
        }
        else
            low = mid +1;
    }
    return res;
}
