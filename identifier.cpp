#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int flag=1;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if((s[0]>=char(65) && s[0]<=char(90)) || (s[0]>=char(97) && s[0]<=char(122)) || s[0]== char(95))
        {
            if((s[i+1]>=char(32) && s[i+1]<=char(47)) || ((s[i+1]>=char(58) && s[i+1]<=char(64))) || (s[0]>=char(91) && s[0]<=char(94)) || (s[0]>=char(123) && s[0]<=char(126) || s[i+1]==char(96)))
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        {
            cout<<"Valid Identifier ";
        }
    if(flag==0)
    {
        cout<<"Not a valid Identifier ";
    }
}