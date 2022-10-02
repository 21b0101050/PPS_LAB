#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=n-2;
    int i=0,j=0,k=0;
    for(i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
            for(j=1;j<=n;j++)
            {
                cout<<"*"<<" ";  
            }
            cout<<endl;
        }
        else{
            for(j=s;j>0;j--)
            {
                cout<<" "<<" ";
            }
            cout<<"*"<<" ";
            cout<<endl;
            s--;
        }
    }
}