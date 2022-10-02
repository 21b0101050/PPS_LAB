#include<iostream>
using namespace std;
int palindrome(int num)
{
    int num2=0,rem;
    while(num!=0)
    {
        rem=num%10;
        num2=num2*10+rem;
        num=num/10;
    }
    return num2;
}
int main()
{
    int n;
    cout<<"Enter the number to check: ";
    cin>>n;
    if(n==palindrome(n))
    {
        cout<<"Number is Palindrome";
    }
    else
    {
        cout<<"Number is not Plaindrome";
    }
}