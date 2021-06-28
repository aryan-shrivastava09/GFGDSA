#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,4,10,20,20,20,30}, n= 8, x = 20;
    int firstocc = 4, lastocc = 6; // Calculate through firstocc and lastocc function
    if(firstocc==-1)
        return 0;
    else
        return (lastocc-firstocc+1);
}
