#include<iostream>
using namespace std;
int main()
{
    int num, r,c;
    int A[5][5]={0};
    A[0][2]=1;
    //cout<<"Enter the order of matrix (odd)";
    //cin>>num;
    r=0;c=2;
    int tr=r,tc=2,n=1;
    while(n!=25)
    {
        tr--;
        if(tr<0)
        {
            tr=4;
        }
        tc++;
        if(tc>4)
        {
            tc=0;
        }
    
        n=n+1;
        if(A[tr][tc]==0)
        {
            A[tr][tc]=n;
            r=tr;
            c=tc;
        }
        else{
            r=r+1;
            A[r][c]=n;
            tr=r;
            tc=c;
        }

    }
    for(r=0;r<5;r++)
    {
        for(c=0;c<5;c++)
        {
            cout<<A[r][c]<<" ";
        }
        cout<<endl;
    }

}