#include<iostream>
using namespace std;
int main()
{
    int n,j;
    cout<<"Enter no of terms: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int k=1;k<i;k++)
        cout<<i-k;
        cout<<" ";
    }
    
}