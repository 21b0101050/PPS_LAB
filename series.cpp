#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter the Nth term: ";
    cin>>n;
    cout<<"Enter the value of x: ";
    cin>>x;
    float sum=0,fact=1,p=1;
    for(int i=1;i<=n;i++)
    {   
        p=p*x;
        fact=fact*i;
        sum=sum+(p/fact);
        //sign*=-1;
    }
    cout<<(sum);
}