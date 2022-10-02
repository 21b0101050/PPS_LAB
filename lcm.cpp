#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    else{
        if(a>b)
        {
            gcd(a%b,b);
        }
        else{
            gcd(a,b%a);
        }
    }
}
int main()
{
    int a,b;
    cout<<"Enter the numbers for lcm: ";
    cin>>a>>b;
    int mul=a*b;
    cout<<"lcm is: "<<mul/gcd(a,b);
}