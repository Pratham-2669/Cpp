#include<iostream>
using namespace std;

class INSERT
{
    int n;
    int a[30];
    void sort()
    {
        for(int i=1;i<n;i++)
        {
            int low = a[i];
            int j=i-1;
            while(j>=0 && a[j]>low)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=low;
        }
    }
    void show()
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i];
            }
        }
    public:
    INSERT()
    {
        cout<<"how many elements";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<endl<<"ENTER ELEMENT AT POSITION "<<i+1;
            cin>>a[i];
        }
        sort();
        show();
    }
};

int main()
{
    INSERT p;
}


