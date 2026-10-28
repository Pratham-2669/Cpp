#include<iostream>
using namespace std;

class BASE1
{
    int A;
    public:
    inline BASE1(int a)
    {
        A = a;
    }
    protected:
    int get_A()
    {
        return A;
    }

};

class BASE2
{
    int B;
    public:
    inline BASE2(int b)
    {
        B=b;
    }
    int get_B()
    {
        return B;
    }
};

class DERIVED : public BASE1, protected BASE2
{
    int z;
    void show()
    {
        cout<<z;
    }
    public:
    inline DERIVED(int a, int b): BASE1(a) ,BASE2(b)
    {
        z=get_A()*get_B();
        show();
    }
};

int main()
{
    int p, o;
    cout<<"enter A";
    cin>>p;
    cout<<"enter B";
    cin>>o;
    DERIVED P(p, o);
}