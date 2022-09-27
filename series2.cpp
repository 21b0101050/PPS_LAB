#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter the Nth term: ";
    cin>>n;
    cout<<"Enter the value of x: ";
    cin>>x;
    int sign=-1;
    float sum=x,fact=1,p=x;
    for(int i=1;i<=n;i++)
    {   
        p=p*x*x;
        fact=fact*(2*i)*(2*i+1);
        sum=sum+(p/fact)*sign;
        sign*=-1;
    }
    
    cout<<(sum);
}