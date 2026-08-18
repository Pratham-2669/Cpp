#include<iostream>
using namespace std;

class BUBBLE
{
    int a[20];
    int n;
    public:
    BUBBLE()
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
            for(int j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
    void show()
    {
        for(int i = 0; i < n; i++) 
        {
            cout << a[i]<<" ";
            
        }
    }
};
int main()
{
    BUBBLE p;
}