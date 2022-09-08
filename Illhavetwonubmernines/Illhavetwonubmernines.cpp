#include <iostream>

int main()
{
    std::cout << "Enter angle, first side's length and second side's length:" << std::endl;
    double a;
    int A, B;
    std::cin >> a >> A >> B;
    std::cout << "The area of the triangle is " << 0.5 * A * B * sin(a * 3.14159265 / 180);
}