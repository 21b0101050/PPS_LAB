#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Nth term: ";
    cin>>n;
    int sum=0,fact=1,sign=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sum+=sign*fact;
        sign*=-1;
    }
    cout<<sum;
}