#include<iostream>
using namespace std;

class MERGE
{
    int a[10];
    int b[15];
    int c[25];
    int n, m;
    public:
    MERGE()
    {
        cout<<"number of elements in A";
        cin>>m;
        cout<<endl<<"ENTER ELEMENTS IN ARRAY A";
        for(int i=0;i<m;i++)
        {
            cout<<endl<<"enter element at position "<<i+1;
            cin>>a[i];
        }
        cout<<"number of elements in B";
        cin>>n;
        cout<<"ENTER ELEMENTS IN ARRAY B";
        for(int i=0;i<n;i++)
        {
            cout<<endl<<"enter element at position "<<i+1;
            cin>>a[i];
        }
        process();
        display();
    }
    private:
    void process()
    {
        int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            if(a[i]<b[j])
            c[k++]=a[i++];
            else
            c[k++]=b[j++];

        }
        while(i<m)
        {
            c[k++]=a[i++];
        }
        while(j<n)
        {
            c[k++]=b[j++];
        }
    }
    void display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<c[i];
        }
    }
};
int main()
{
    MERGE p;
}