#include<iostream>
using namespace std;
class palli
{
    int n,s,p,pal;
    public:
    void input();
    void display();
};

void palli:: input()
    {
     cout<<"enter a number ";
     cin>>n;
     s=n;
     pal=0;
     while(n>0)
        {
            p=n%10;
            pal=pal*10+p;
            n=n/10;
        }
    }
        void palli:: display()
        {
            if(s==pal)
            cout<<"pallindrome";           
            else
            cout<<"not pallindrome";
        }
int main()
{
    palli p;
    p.input();
    p.display();
    return 0;
}
    
