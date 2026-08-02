#include<iostream>
using namespace std;

class base
{
    float num1;
    public:
    float num2;
    void input_data()
    {
        cout<<"ENTER NUM1 VALUE";
        cin>>num1;
    }
    float get_num1()
    {
        return num1;
    }
};
class derived : public base
{
    float sum;
    public:
    void get_data()
    {   
        input_data();
        cout<<endl<<"ENTER NUM2 VALUE";
        cin>>num2;
        sum=get_num1()+num2;
    }
    void show_data()
    {
        cout<<endl<<"NUM1 = "<<get_num1();
        cout<<endl<<"NUM2 = "<<num2;
        cout<<endl<<"SUM = "<<sum;
    }
};
int main()
{
    derived p;
    p.get_data();
    p.show_data();
}