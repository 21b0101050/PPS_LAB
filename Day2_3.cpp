#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    //int a=65;
    for(int i=1;i<=n;i++)
    {
        int k=i;
        for(int j=0;j<i;j++,k++)
        {            
            cout<<char(k+64)<<" ";
        }
        
        cout<<endl;
    }
}