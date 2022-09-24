#include <iostream>
#define PI 3.14159265

int main()
{
    std::cout << "Enter angle, first side's length and second side's length: ";
    float a, A, B;
    std::cin >> a >> A >> B;
    std::cout << std::endl << "The area of the triangle is " << 0.5 * A * B * sin(a * PI / 180);
}