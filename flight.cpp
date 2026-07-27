#include<iostream>
using namespace std;
class FLIGHT
{
    int flightno;
    float distance;
    char dest [20];
    float fuel;
    void calfuel();
    public:
    void feedinfo();
    void showinfo();
};
void FLIGHT::feedinfo()
{
    cout<<"enter flight no.";
    cin>>flightno;
    cout<<endl<<"enter destination";
    cin>>dest;
    cout<<endl<<"enter distance";
    cin>>distance;
    calfuel();
}
void FLIGHT::calfuel()
{
    if(distance <=1000)
    {
        fuel=500;
    }
    else if(distance >1000 && distance<=2000)
        {
            fuel = 1100;
        }
        else
        fuel=2200;
}
void FLIGHT::showinfo()
{
    cout<<endl<<"flightno : "<<flightno;
    cout<<endl<<"destination : "<<dest;
    cout<<endl<<"distance : "<<distance;
    cout<<endl<<"fuel : "<<fuel;
}

int main()
{
    FLIGHT p;
    p.feedinfo();
    p.showinfo();
}