#include<iostream>
using namespace std;

class FIBO
{
    unsigned short int n;
    void input()
    {
        cout<<"enter a number";
        cin>>n;
    }
    public:
    void display()
    {
        input();
        int c;
        int i=1, a=0, b=1;
        cout<<a<<" "<<b;
        while(i<=n-2)
        {
            c=a+b;
            cout<<" "<<c;
            a=b;
            b=c;
            i++;
        }
    }
};

int main()
{
    FIBO p;
    p.display();
}