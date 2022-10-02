#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    cout<<"Enter the no. of elemensts: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<j<<" ";
        }
        for(k=1;k<i;k++)
        {
            cout<<" "<<" ";
        }
        for(l=0;l<=i;l++)
        {
            cout<<" "<<" ";
        }
        for(m=n;m>i;m--)
        {
            if((m-i)!=n)
            cout<<m-i<<" ";
        }
        cout<<endl;
    }

}