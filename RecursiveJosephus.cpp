#include<iostream>
using namespace std;
int jos(int n, int k)
{
    if(n==1)
        return 0;
    return (jos(n-1,k)+k)%n;
}
int main()
{
    int n,k,sur;
    cout<<"enter n and k: ";
    cin>>n>>k;
    sur = jos(n,k);
    cout<<"Survivor is: "<<sur<<endl;
}
