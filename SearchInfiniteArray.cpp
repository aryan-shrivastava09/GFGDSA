#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> v,int x,int low,int high)
{
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]==x)
            return mid;
        else if(v[mid]>x)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}
int searchinfinite(vector<int> v, int x)
{
    if(v[0]==x)
        return 0;
    int i=1;
    while(v[i]<x)
    {
        i= i*2;
    }
    if(v[i]==x)
        return i;
    else
        return BinarySearch(v, x, i/2+1,i);
}
int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9,11,20,50,60,70,80};
    int x = 60;
    cout<<searchinfinite(arr,x);
}
