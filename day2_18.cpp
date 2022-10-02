#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    cout<<"Enter the string ";
    string s;
    cin>>s;
    int len=s.length();
    cout<<s<<endl;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len;j++)
        {
            s[i]='.';
            cout<<s[j];
        }
        cout<<endl;
    }
}
