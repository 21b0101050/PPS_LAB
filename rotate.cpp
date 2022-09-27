#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cout<<"Enter the number of Elements: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number for rotation: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[n-j]=arr[n-1-j];
        }
        arr[0]=arr[n]; 
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}