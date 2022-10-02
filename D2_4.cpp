#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a=65;
    for(int i=4;i<=n;i++)
    {
        for(char j=a;j<i;j++)
        {
            cout<< a<<" ";
        }
        cout<<endl;
    }
}
