#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
       fact=fact*i;
    }
    return fact;    
}
int combination(int n,int r)
{
    if(r==0)
    {
        return 1;
    }
    else
    {
        return factorial(n)/(factorial(r)*factorial(n-r));
    }
}
int main()
{
    int n;
    cout<<"Enter the values of n ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<combination(n,i)<<" ";
    }
}