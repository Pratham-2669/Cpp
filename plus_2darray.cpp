#include <iostream>
using namespace std;

int main() 
{
    int a[4][3];
    int p,q;
    cout << "Enter the order of matrix : ";
    cin>>p;
    cin>>q;
    cout<<"enter elements in array";
    cout<<endl;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            if(j==p/2||i==p/2)
            cout<<a[i][j]<<" ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}