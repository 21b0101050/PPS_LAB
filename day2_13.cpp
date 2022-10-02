#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a=n;
    cout<<n<<" ";
    while(n>=0)
    {
        if(n==0)
        {
            break;
        }
        else{
            n-=5;
            cout<<n<<" ";
        }
    }
    n=n+5;
    while(n<=a)
    {  
        cout<<n<<" ";
        n+=5;      
        
        
    }

}