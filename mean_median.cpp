#include<iostream>
using namespace std;
int mean(int A[])
{
    int m=0;
    for(int i=0;i<5;i++)
    {
        m+=A[i];
    }
    return (m/5);
}
int median(int A[])
{
    int median=A[5/2];
    return median;
}
int main()
{

    int n=5;
    int A[5];
    cout<<"Enter the 5 elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Mean of the elements is: "<<mean(A)<<endl;
    cout<<"Median of the elements is: "<<median(A);
    
}