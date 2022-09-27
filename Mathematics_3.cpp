//////////////INCOMPLETE*********************************************
#include<iostream>
using namespace std;
int count(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum+=1;
        num=num/10;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int n=num;
    int rem,sum=0,s;
    while(n!=0)
        {
            for(int i=0;i<count(n);i++)
            {
                rem=num%10;
                sum+=rem;
                n=num/10;       
            }
            s=sum;
            n=sum;
            sum=0;
            num=sum;
            n=n/10;
        }
        cout<<s;
}
