#include <iostream>
using namespace std;
class VOLUME
{
    float r, r1, h, v;
    public:
    VOLUME(float);
    VOLUME(float ,float);
    void display();
};
VOLUME::VOLUME(float ra)
{
    r=ra;
    v=(4.00/3.00)*(22.00/7.00)*r*r*r;
}
VOLUME::VOLUME(float rad, float hi)
{
    r1=rad;
    h=hi;
    v=(22.00/7.00)*r1*r1*h;
}
void VOLUME::display()
{
    cout<<v<<endl;
}
int main()
{
    float radius_sphere, radius_cylinder, height_cylinder;
    
    // Get user input for the sphere
    cout << "Enter radius for sphere: ";
    cin >> radius_sphere;
    
    // Get user input for the cylinder
    cout << "Enter radius and height for cylinder simultaneously: ";
    cin >> radius_cylinder >> height_cylinder;
    
    // Create objects to trigger the calculations
    VOLUME sphere(radius_sphere);
    VOLUME cylinder(radius_cylinder, height_cylinder);
    
    // Print the results
    cout << "\nVolume of Sphere: ";
    sphere.display();
    
    cout << "Volume of Cylinder: ";
    cylinder.display();
}
