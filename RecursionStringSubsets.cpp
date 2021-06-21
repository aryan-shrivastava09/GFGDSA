#include<iostream>
using namespace std;
string subsets(string &s, string curr="", int i = 0)
{
    if(i==s.length())
    {
        cout<<curr<<endl;
        return "";
    }
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}
int main()
{
    string word;
    cout<<"Enter a string: ";
    cin>>word;
    subsets(word);
}
