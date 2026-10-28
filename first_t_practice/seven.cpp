#include<iostream>
using namespace std;

class BASE
{
    float num1;
    public:
    float num2;
    void input_data()
    {
        cout<<"enter a number for num1";
        cin>>num1;
    }
    float get_num1()
    {
        return num1;
    }
};

class DERIVED : public BASE
{   public:
    float sum;
    
    void get_data()
    {
        //input_data();
        cout<<"enter a number for num2";
        cin>>num2;
        sum= get_num1() + num2;
    }
    void show_data()
    {
        cout<<"num1 = ";
        cout<<get_num1();
        cout<<endl<<"num2 = ";
        cout<<num2;
        cout<<endl<<"sum = ";
        cout<<sum;
    }
};

int main()
{
    DERIVED p;
    p.input_data();
    p.get_data();
    p.show_data();
}