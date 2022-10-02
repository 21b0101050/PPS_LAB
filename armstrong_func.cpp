#include<iostream>
using namespace std;
int count(int num)
{
    int cnt=0;
    while(num!=0)
    {
        cnt+=1;
        num=num/10;
    }
    return cnt;
}
int power(int n,int p)
{
    int ans=1;
    for(int i=0;i<p;i++)
    {
        ans=ans*n;
    }
    return ans;
}
void Armstrong(int range)
{
    int sum=0,num,rem;
    for(int i=1;i<=range;i++)
    {
        num=i;
        while(num!=0)
        {
            rem=num%10;
            sum=sum+power(rem,count(i));
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
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    Armstrong(n);
}
