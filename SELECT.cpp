#include<iostream>
using namespace std;

class SELECT
{
    int a[20];
    int n;
    public:
    SELECT()
    {
        cout << "Enter the number of elements you want to use (max 20): ";
        cin >> n;
        for(int i = 0; i < n; i++) 
        {
            cout << endl << "Enter value at position " <<i + 1<< ": ";
            cin >> a[i];
        }
        sort();
        show();
    }
    private:
    void sort()
    {
        for(int i=0;i<n-1;i++)
        {
            int low=i;
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[low])
                low=j;
            }
            int temp = a[i];
            a[i]=a[low];
            a[low]=temp;
        }
    }
    void show()
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};  
int main()
{
    SELECT s;
}