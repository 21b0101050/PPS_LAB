#include<iostream>
using namespace std;
int count(int n)
{
    int cnt=0;
    while(n!=0)
    {
        cnt+=1;
        n=n/10;
    }
    return cnt;
}
int main()
{
    int n,cnt=0;
    cout<<"Enter the numbr of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(count(arr[i])%2==0)
        {
            cnt+=1;
        }
    }
    cout<<cnt;
}