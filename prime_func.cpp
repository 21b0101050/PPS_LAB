#include<iostream>
using namespace std;
void prime(int num)
{
    int cnt=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cnt++;
        }
    }
    if(cnt>2)
    {
        cout<<"Not Prime ";
    }
    else
    {
        cout<<"Prime Number";
    }
}
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    prime(n);
}