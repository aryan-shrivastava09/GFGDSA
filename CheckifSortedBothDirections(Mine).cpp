#include<iostream>
using namespace std;
int checkSort(int arr[], int n)
{
    int c1=0, c2=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
            c1++;
        else
            c2++;
    }
    if(c1==0||c2==0)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}
int main()
{
    int arr1[] = {2,4,5,6,7,8};
    int arr2[] = {8,7,6,5,4,3,2};
    int arr3[] = {21,7,1,87};
    checkSort(arr1,6);
    checkSort(arr2,7);
    checkSort(arr3,4);

}
