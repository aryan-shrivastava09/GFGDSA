#include<iostream>
#include<algorithm>
using namespace std;
struct P
{
    int x,y;
};
bool mycomp(P p1, P p2)
{
    return (p1.x < p2.x);
}

int main()
{
    P arr[] = {{2,3}, {4,5}, {6,7}};
    int n= 3;
    sort(arr, arr+n, mycomp);
    for(auto i:arr)
    {
        cout<<i.x<<" "<<i.y<<endl;
    }
}
