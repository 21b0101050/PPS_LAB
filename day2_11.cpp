//**********************INCOMPLETE**********************************
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int a=n;
    int b=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        
        for(k=a-1;k>0;k--)
        {
            cout<<" ";
        }
        a--;
        for(l=b-1;l>0;l--)
        {
            cout<<" ";
        }
        b--;
        for(m=1;m<=i;m++)
        {
            cout<<i-m+1;
        }
        cout<<endl;
    }

}