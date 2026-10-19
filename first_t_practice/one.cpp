#include<iostream>
using namespace std;

class NUMBER
{
    short unsigned int num;
    int input()
    {
        cout<<"enter a number";
        cin>>num;
        int s = num, p, sum = 0;
        while(s>0)
        {
            p=s%10;
            sum=sum*10+p;
            s=s/10;
        }
        if(sum==num)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    public:
    void display()
    {
        
        if(input() == 0)
        {
            cout<<"not palindrome";
        }
        else
        {
            cout<<endl<<"palindrome";
        }
    }
};

int main()
{
    NUMBER p;
    p.display();
}