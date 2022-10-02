#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void Strong_number(int range)
{
    int rem, sum=0;
    for(int i=1;i<=range;i++)
    {
        int num=i;
        while(num!=0)
        {
            rem=num%10;
            sum=sum+factorial(rem);
            num=num/10;
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
        sum=0;
    }
}
int main()
{
    int range;
    cout<<"Enter the range: ";
    cin>>range;
    Strong_number(range);
}