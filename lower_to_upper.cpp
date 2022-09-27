#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: "<<endl;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    cout<<"String after conversion of lower-to-upper and vice versa is: "<<endl;
    cout<<s;
}