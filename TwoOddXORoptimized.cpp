#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,4,6,6,8,8,10,10,12,12};
    int XOR=0,res1=0,res2=0;
    for(int i=0;i<10;i++)
    {
        XOR^=arr[i];
    }
    int sn= XOR&~(XOR-1);
    for(int i=0;i<10;i++)
    {
        if((arr[i]&sn)!=0)
            res1^=arr[i];
        else
            res2^=arr[i];
    }
    cout<<res1<<" "<<res2;
}
