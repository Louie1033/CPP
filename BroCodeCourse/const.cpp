#include <iostream>

int main()
{
    //const prevents a variable's value from being changed making it
    //essentially read only

    const double PI = 3.14159;
    const int  LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    double radius = 5;
    double circumference = 2*PI*radius;

    std::cout << circumference << "cm" << "\n";
    std::cout << "The speed of light is " << LIGHT_SPEED << "m/s";

    return 0;
}