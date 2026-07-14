#include<iostream>
using namespace std;
class armstrong
{
    int n,s,sum,p;
    public:
    void input();
    void display();
};

void armstrong::input()
{
    cout<<"enter a number ";
    cin>>n;
    s=n;
    sum=0;
    while(n>0)
    {
        p=n%10;
        sum=sum+p*p*p;
        n=n/10;
    }
}
void armstrong :: display()
{
    if(s==sum)
    cout<<"armstrong";
    else
    cout<<"not armstrong";
}

int main()
{
    armstrong p;
    p.input();
    p.display();
}