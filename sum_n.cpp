#include<iostream>
using namespace std;
int n_sum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Sum till "<<n<<" "<<"is "<<n_sum(n);
}