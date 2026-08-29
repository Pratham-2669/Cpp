#include <iostream>
using namespace std;

int main() 
{
    int a[4][4],b[4][4],c[4][4];
    int m,n,p,q;
    cout << "Enter the order of matrix A: ";
    cin>>m;
    cin>>n;
    cout<<"enter elements in array A";
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout << "Enter the order of matrix B: ";
    cin>>p;
    cin>>q;
    cout<<"enter elements in array B";
    cout<<endl;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }

    if(n==p)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {c[i][j]=0;
                for(int k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
            }
        }

        for(int a=0;a<m;a++)
        {
            for(int p=0;p<q;p++)
            cout<<c[a][p]<<" ";
            cout<<endl;
        }
    }
    else
    cout<<"condition for array multiplication was not fulfilled";
}