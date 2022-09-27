#include<iostream>
using namespace std;
int power(int num,int pow)
{
    int ans=1;
    for(int i=0;i<pow;i++)
    {
        ans=ans*num;
    }
    return ans;
}
int main()
{
    int n,p;
    cout<<"Enter the number and power: ";
    cin>>n>>p;
    cout<<"Answer is: "<<power(n,p);
}