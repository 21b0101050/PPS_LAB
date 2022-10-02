//NOt working for bigg valuessss***********************************
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int s=1;
    for(i=2;i<n;i++)
    {
        s=s+i;
        if(s==n)
        {
            cout<<"Go On Bob "<<s-1;
            return 0;
        }
    }
    cout<<"Better Luck Next Time";
}