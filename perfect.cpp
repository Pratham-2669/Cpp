#include<iostream>
using namespace std;

int main()
{
    int n,s=0;

    cout<<"enter a number : ";
    cin>>n;

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }

    if(s==n)
    cout<<"perfect";
    else
    cout<<"not perfect";
}