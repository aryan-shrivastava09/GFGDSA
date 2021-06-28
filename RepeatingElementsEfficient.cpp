#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,2,1,3,2,2}, n=6;
    bool visited[] = {false};
    for(int i=0;i<n;i++)
    {
        if(visited[arr[i]])
            return arr[i];
        visited[arr[i]] = true;
    }
}
