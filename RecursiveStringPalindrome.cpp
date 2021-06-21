#include<iostream>
#include<string>
using namespace std;
bool palindrome(string &s, int start = 0, int e=0)
{
    if(start>=e)
        return true;
    return ((s[start]==s[e])&&palindrome(s,start+1,e-1));
}
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int n = s.length();
    return palindrome(s,0,n-1);
}
