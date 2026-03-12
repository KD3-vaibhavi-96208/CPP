#include<iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;
    static double PI;  
public:
    
    Cylinder() : radius(1), height(1)
    {
    }

    
    Cylinder(double radius, double height) : radius(radius), height(height)
    {
    }

   
    double getRadius()
    {
        return radius;
    }

   
    void setRadius(double r)
    {
        radius = r;
    }

   
    double getHeight()
    {
        return height;
    }

   
    void setHeight(double h)
    {
        height = h;
    }

    
    double calculateVolume()
    {
        return PI * radius * radius * height;
    }
};


double Cylinder::PI = 3.14;

int main()
{
    Cylinder c1;   
    cout << "Default Cylinder Volume: " << c1.calculateVolume() << endl;

    Cylinder c2(5, 10);   
    cout << "Cylinder Volume: " << c2.calculateVolume() << endl;

    return 0;
}