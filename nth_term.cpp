#include<iostream>
using namespace std;
int main()
{
    int n;
    int x=0;
    int sum=9;
    cout<<"Enter the Nth term: ";
    cin>>n;
    cout<<9<<" ";
    for(int i=0;i<n-1;i++)
    {
        sum=sum+24+x;
        cout<<sum<<" ";
        x+=16;
    }
}