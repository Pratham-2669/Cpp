#include <iostream>
using namespace std;

int main() 
{
    int a[20];
    int n;
    cout << "Enter the number of elements you want to use (max 20): ";
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cout << endl << "Enter value at position " << (i + 1) << ": ";
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) 
    {
        cout<<a[i];
    }
    return 0;
}